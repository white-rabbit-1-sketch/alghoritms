#include "LinkedList.hpp"

template <typename NodeValueType>
void LinkedList<NodeValueType>::append(LinkedListNode<NodeValueType> &node)
{
    if (!this->firstNode) {
        this->firstNode = &node;
    }
    
    if (this->lastNode) {
        this->lastNode->setNext(node);
    }

    this->lastNode = &node;
}

template <typename NodeValueType>
LinkedListNode<NodeValueType> *LinkedList<NodeValueType>::getFirstNode() const
{
    return this->firstNode;
}

template <typename NodeValueType>
LinkedListNode<NodeValueType> *LinkedList<NodeValueType>::getLastNode() const
{
    return this->lastNode;
}