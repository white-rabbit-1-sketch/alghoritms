#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "LinkedListNode.hpp"

template <typename NodeValueType>
class LinkedList {
    protected:
        LinkedListNode<NodeValueType> *firstNode;
        LinkedListNode<NodeValueType> *lastNode;

    public:
        void append(LinkedListNode<NodeValueType> &node);
        LinkedListNode<NodeValueType> *getFirstNode() const;
        LinkedListNode<NodeValueType> *getLastNode() const;
};

#endif