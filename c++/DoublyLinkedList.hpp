#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "LinkedList.hpp"
#include "DoublyLinkedListNode.hpp"

namespace alg {
    template <typename DoublyLinkedListNodeType>
    class DoublyLinkedList: public LinkedList <DoublyLinkedListNodeType>
    {
        public:
            void append(DoublyLinkedListNodeType &node) override;
    };
}

#include "DoublyLinkedList.cpp"

#endif