#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

#include <string>

using namespace std;

class LinkedListNode 
{
    protected:
        LinkedListNode *next;
        string value;

    public:
        LinkedListNode(string value);
        string getValue() const;
        LinkedListNode *getNext() const;
        void setNext(LinkedListNode &node);
};

#endif