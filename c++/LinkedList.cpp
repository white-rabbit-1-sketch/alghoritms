#include "LinkedList.hpp"

void LinkedList::append(LinkedListNode &node)
{
    if (!this->firstNode) {
        this->firstNode = &node;
    }
    
    if (this->lastNode) {
        this->lastNode->setNext(node);
    }

    this->lastNode = &node;
}

LinkedListNode *LinkedList::getFirstNode() const
{
    return this->firstNode;
}

LinkedListNode *LinkedList::getLastNode() const
{
    return this->lastNode;
}