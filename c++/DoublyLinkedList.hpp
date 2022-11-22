#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "LinkedList.hpp"
#include "DoublyLinkedListNode.hpp"

namespace alg {
    template <typename NodeValueType>
    class DoublyLinkedList: public LinkedList<NodeValueType>
    {
        protected:
            DoublyLinkedListNode<NodeValueType> *firstNode = nullptr;
            DoublyLinkedListNode<NodeValueType> *lastNode = nullptr;

        public:
            void append(DoublyLinkedListNode<NodeValueType> &node);
            DoublyLinkedListNode<NodeValueType> *getFirstNode() const;
            DoublyLinkedListNode<NodeValueType> *getLastNode() const;
    };
}

#include "DoublyLinkedList.cpp"

#endif