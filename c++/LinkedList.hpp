#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "LinkedListNode.hpp"

namespace alg {
    template <typename LinkedListNodeType>
    class LinkedList {
        protected:
            LinkedListNode<LinkedListNodeType> *firstNode = nullptr;
            LinkedListNode<LinkedListNodeType> *lastNode = nullptr;

        public:
            virtual void append(LinkedListNode<LinkedListNodeType> &node);
            virtual LinkedListNode<LinkedListNodeType> *getFirstNode() const;
            virtual LinkedListNode<LinkedListNodeType> *getLastNode() const;
    };
}

#include "LinkedList.cpp"

#endif