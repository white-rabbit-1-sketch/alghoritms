#include "LinkedList.hpp"

namespace alg {
    template <typename LinkedListNodeType>
    void LinkedList<LinkedListNodeType>::append(LinkedListNodeType &node)
    {
        if (!this->firstNode) {
            this->firstNode = &node;
        }

        if (this->lastNode) {
            this->lastNode->setNext(&node);
        }

        this->lastNode = &node;
    }

    template <typename LinkedListNodeType>
    LinkedListNodeType *LinkedList<LinkedListNodeType>::getFirstNode() const
    {
        return this->firstNode;
    }

    template <typename LinkedListNodeType>
    LinkedListNodeType *LinkedList<LinkedListNodeType>::getLastNode() const
    {
        return this->lastNode;
    }
}
