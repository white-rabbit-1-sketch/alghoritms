#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "DoublyLinkedListNode.hpp"

namespace alg {
    template <typename DoublyLinkedListNodeType>
    class DoublyLinkedList
    {
        protected:
            DoublyLinkedListNode<DoublyLinkedListNodeType> *firstNode = nullptr;
            DoublyLinkedListNode<DoublyLinkedListNodeType> *lastNode = nullptr;

        public:
            virtual void append(DoublyLinkedListNode<DoublyLinkedListNodeType> &node);
            virtual DoublyLinkedListNode<DoublyLinkedListNodeType> *getFirstNode() const;
            virtual DoublyLinkedListNode<DoublyLinkedListNodeType> *getLastNode() const;
    };
}

#include "DoublyLinkedList.cpp"

#endif