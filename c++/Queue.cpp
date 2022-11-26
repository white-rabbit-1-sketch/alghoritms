#include "Queue.hpp"

namespace alg {
    template <typename ValueType>
    void Queue<ValueType>::push(ValueType &value)
    {
        this->data.push_back(value);
    }

    template <typename ValueType>
    bool Queue<ValueType>::pop(ValueType &value)
    {
        bool result = false;

        if (!this->data.empty()) {
            value = this->data[0];
            this->data.erase(this->data.begin());

            result = true;
        }

        return result;
    }
}