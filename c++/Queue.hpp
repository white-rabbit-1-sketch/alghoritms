#ifndef QUEUE_H
#define QUEUE_H

#include <vector>

using namespace std;

namespace alg {
    template <typename ValueType>
    class Queue {
        protected:
            std::vector<ValueType> data;

        public:
            void push(ValueType &value);
            bool pop(ValueType &value);
    };
}

#include "Queue.cpp"

#endif