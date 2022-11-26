#include "DoublyQueue.hpp"

namespace alg {
    template <typename ValueType>
    bool DoublyQueue<ValueType>::popBack(ValueType &value)
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