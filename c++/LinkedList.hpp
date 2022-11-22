#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "LinkedListNode.hpp"

namespace alg {
    template <typename LinkedListNodeType>
    class LinkedList {
        protected:
            LinkedListNodeType *firstNode = nullptr;
            LinkedListNodeType *lastNode = nullptr;

        public:
            virtual void append(LinkedListNodeType &node);
            virtual LinkedListNodeType *getFirstNode() const final;
            virtual LinkedListNodeType *getLastNode() const final;
    };
}

#include "LinkedList.cpp"

#endif