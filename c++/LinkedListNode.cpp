#include "LinkedListNode.hpp"

LinkedListNode::LinkedListNode(string value) 
{
    this->value = value;
}

string LinkedListNode::getValue() const
{
    return this->value;
}

LinkedListNode *LinkedListNode::getNext() const
{
    return this->next;
}

void LinkedListNode::setNext(LinkedListNode &node)
{
    this->next = &node;
}