#include "ThreadPool.hpp"

using namespace std;

namespace alg {
    ThreadPool::ThreadPool()
    {

    }

    void ThreadPool::start()
    {
        const uint32_t threadsCount = thread::hardware_concurrency();
        
        this->threadList.resize(threadsCount);   
        for (uint32_t i = 0; i < threadsCount; i++) {
            this->threadList.at(i) = thread(&ThreadPool::threadLoop, this);
        }
    }

    void ThreadPool::threadLoop() 
    {
        while (true) {
            function<void()> task;
            
            {
                unique_lock<std::mutex> lock(this->mutex);
                    
                this->mutexCondition.wait(lock, [this] {
                    return !this->queue.empty() || this->shouldTerminate;
                });

                if (this->shouldTerminate) {
                    return;
                }

                task = this->queue.front();
                this->queue.pop();
            }
            
            task();
        }
    }

    void ThreadPool::addTask(const function<void()> &task)
    {
        {
            unique_lock<std::mutex> lock(this->mutex);
            this->queue.push(task);
        }
        
        this->mutexCondition.notify_one();
    }

    bool ThreadPool::busy() 
    {
        bool result;

        {
            unique_lock<std::mutex> lock(this->mutex);
            result = !this->queue.empty();
        }

        return result;
    }

    void ThreadPool::stop() 
    {
        {
            unique_lock<std::mutex> lock(this->mutex);
            this->shouldTerminate = true;
        }

        this->mutexCondition.notify_all();

        for (thread &activeThread : this->threadList) {
            activeThread.join();
        }

        this->threadList.clear();
    }
}