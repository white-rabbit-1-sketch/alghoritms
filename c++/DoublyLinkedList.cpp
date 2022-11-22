#include "LinkedList.hpp"

namespace alg {
    template <typename DoublyLinkedListNodeType>
    void DoublyLinkedList<DoublyLinkedListNodeType>::append(DoublyLinkedListNodeType &node)
    {
        LinkedList<DoublyLinkedListNodeType>::append(node);

        DoublyLinkedListNodeType *currentLastNode = this->lastNode;
        node.setPrevious(*(currentLastNode));
    }
}