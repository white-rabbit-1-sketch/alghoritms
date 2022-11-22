#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include <string>
#include "LinkedListNode.hpp"

using namespace std;

namespace alg {
    template <typename NodeValueType>
    class DoublyLinkedListNode: public LinkedListNode<NodeValueType>
    {
        protected:
            DoublyLinkedListNode *next = nullptr;
            DoublyLinkedListNode *previous = nullptr;

        public:
            explicit DoublyLinkedListNode(NodeValueType value);
            NodeValueType getValue() const;
            DoublyLinkedListNode *getPrevious() const;
            void setPrevious(DoublyLinkedListNode &node);
            DoublyLinkedListNode *getNext() const;
            void setNext(DoublyLinkedListNode &node);
    };
}

#include "DoublyLinkedListNode.cpp"

#endif