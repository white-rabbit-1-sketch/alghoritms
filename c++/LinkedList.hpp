#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "LinkedListNode.hpp"

class LinkedList {
    protected:
        LinkedListNode *firstNode;
        LinkedListNode *lastNode;

    public:
        void append(LinkedListNode &node);
        LinkedListNode *getFirstNode() const;
        LinkedListNode *getLastNode() const;
};

#endif