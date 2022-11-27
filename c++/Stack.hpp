#ifndef STACK_H
#define STACK_H

#include <vector>

using namespace std;

namespace alg {
    template <typename ValueType>
    class Stack {
        protected:
            std::vector<ValueType> data;

        public:
            void push(ValueType &value);
            bool pop(ValueType &value);
    };
}

#include "Stack.cpp"

#endif