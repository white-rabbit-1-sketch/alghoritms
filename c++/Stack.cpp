#include "Stack.hpp"

namespace alg {
    template <typename ValueType>
    void Stack<ValueType>::push(ValueType &value)
    {
        this->data.push_back(value);
    }

    template <typename ValueType>
    bool Stack<ValueType>::pop(ValueType &value)
    {
        bool result = false;

        if (!this->data.empty()) {
            value = this->data.back();
            this->data.pop_back();

            result = true;
        }

        return result;
    }
}