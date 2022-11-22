#include "LinkedList.hpp"

namespace alg {
    template <typename NodeValueType>
    void DoublyLinkedList<NodeValueType>::append(DoublyLinkedListNode<NodeValueType> &node)
    {
        if (!this->firstNode) {
            this->firstNode = &node;
        }

        if (this->lastNode) {
            this->lastNode->setNext(node);
            node.setPrevious(*(this->lastNode));
        }

        this->lastNode = &node;
    }

    template <typename NodeValueType>
    DoublyLinkedListNode<NodeValueType> *DoublyLinkedList<NodeValueType>::getFirstNode() const
    {
        return this->firstNode;
    }

    template <typename NodeValueType>
    DoublyLinkedListNode<NodeValueType> *DoublyLinkedList<NodeValueType>::getLastNode() const
    {
        return this->lastNode;
    }
}
