#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

#include <string>

using namespace std;

namespace alg {
    template <typename NodeValueType>
    class LinkedListNode 
    {
        protected:
            LinkedListNode *next = nullptr;
            NodeValueType value;

        public:
            explicit LinkedListNode(NodeValueType value);
            virtual NodeValueType getValue() const;
            virtual LinkedListNode *getNext() const;
            virtual void setNext(LinkedListNode *node);
    };
}

#include "LinkedListNode.cpp"

#endif