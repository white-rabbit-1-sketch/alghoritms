#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include <string>

using namespace std;

namespace alg {
    template <typename NodeValueType>
    class DoublyLinkedListNode
    {
        protected:
            DoublyLinkedListNode *next = nullptr;
            DoublyLinkedListNode *previous = nullptr;
            NodeValueType value;

        public:
            explicit DoublyLinkedListNode(NodeValueType value);
            virtual NodeValueType getValue() const;
            virtual DoublyLinkedListNode *getNext() const;
            virtual void setNext(DoublyLinkedListNode *node);
            virtual DoublyLinkedListNode *getPrevious() const;
            virtual void setPrevious(DoublyLinkedListNode &node);
    };
}

#include "DoublyLinkedListNode.cpp"

#endif