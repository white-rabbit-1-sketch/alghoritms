#include "LinkedList.hpp"

namespace alg {
    template <typename DoublyLinkedListNodeType>
    void DoublyLinkedList<DoublyLinkedListNodeType>::append(DoublyLinkedListNode<DoublyLinkedListNodeType> &node)
    {
        if (!this->firstNode) {
            this->firstNode = &node;
        }

        if (this->lastNode) {
            this->lastNode->setNext(&node);
            node.setPrevious(*this->lastNode);
        }

        this->lastNode = &node;
    }

    template <typename DoublyLinkedListNodeType>
    DoublyLinkedListNode<DoublyLinkedListNodeType> *DoublyLinkedList<DoublyLinkedListNodeType>::getFirstNode() const
    {
        return this->firstNode;
    }

    template <typename DoublyLinkedListNodeType>
    DoublyLinkedListNode<DoublyLinkedListNodeType> *DoublyLinkedList<DoublyLinkedListNodeType>::getLastNode() const
    {
        return this->lastNode;
    }
}