#include "LinkedList.hpp"

namespace alg {
    template <typename DoublyLinkedListNodeType>
    void DoublyLinkedList<DoublyLinkedListNodeType>::append(DoublyLinkedListNodeType &node)
    {
        DoublyLinkedListNodeType *currentLastNode = this->lastNode;

        LinkedList<DoublyLinkedListNodeType>::append(node);

        node.setPrevious(*(currentLastNode));
    }
}