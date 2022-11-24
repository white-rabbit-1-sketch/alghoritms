#include "LinkedListNode.hpp"

namespace alg {
    template <typename NodeValueType>
    LinkedListNode<NodeValueType>::LinkedListNode(NodeValueType value) 
    {
        this->value = value;
    }

    template <typename NodeValueType>
    NodeValueType LinkedListNode<NodeValueType>::getValue() const
    {
        return this->value;
    }

    template <typename NodeValueType>
    LinkedListNode<NodeValueType> *LinkedListNode<NodeValueType>::getNext() const
    {
        return this->next;
    }

    template <typename NodeValueType>
    void LinkedListNode<NodeValueType>::setNext(LinkedListNode *node)
    {
        this->next = node;
    }
}