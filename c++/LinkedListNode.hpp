#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

#include <string>

using namespace std;

template <typename NodeValueType>
class LinkedListNode 
{
    protected:
        LinkedListNode *next = nullptr;
        NodeValueType value;

    public:
        explicit LinkedListNode(NodeValueType value);
        NodeValueType getValue() const;
        LinkedListNode *getNext() const;
        void setNext(LinkedListNode &node);
};

#include "LinkedListNode.cpp"

#endif