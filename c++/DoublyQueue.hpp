#ifndef DOUBLY_QUEUE_H
#define DOUBLY_QUEUE_H

#include <vector>
#include "Queue.hpp"

using namespace std;

namespace alg {
    template <typename ValueType>
    class DoublyQueue: public Queue<ValueType>
    {
        public:
            bool popBack(ValueType &value);
    };
}

#include "DoublyQueue.cpp"

#endif