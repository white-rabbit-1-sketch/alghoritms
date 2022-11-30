#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <vector>
#include <thread>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>

using namespace std;

namespace alg {
    class ThreadPool {
        protected:
            std::queue<function<void()>> queue;
            vector<thread> threadList;
            std::mutex mutex;
            condition_variable mutexCondition;
            bool shouldTerminate = false;
            void threadLoop();

        public:
            ThreadPool();
            void start();
            void stop();
            bool busy();
            void addTask(const function<void()> &task);
            
    };
}

#endif