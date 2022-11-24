#include "DoublyLinkedListNode.hpp"

namespace alg {
    template <typename NodeValueType>
    DoublyLinkedListNode<NodeValueType>::DoublyLinkedListNode(NodeValueType value)
    {
        this->value = value;
    }

    template <typename NodeValueType>
    NodeValueType DoublyLinkedListNode<NodeValueType>::getValue() const
    {
        return this->value;
    }

    template <typename NodeValueType>
    DoublyLinkedListNode<NodeValueType> *DoublyLinkedListNode<NodeValueType>::getNext()  const
    {
        return this->next;
    }

    template <typename NodeValueType>
    void DoublyLinkedListNode<NodeValueType>::setNext(DoublyLinkedListNode *node)
    {
        this->next = node;
    }

    template <typename NodeValueType>
    DoublyLinkedListNode<NodeValueType> *DoublyLinkedListNode<NodeValueType>::getPrevious() const
    {
        return this->previous;
    }

    template <typename NodeValueType>
    void DoublyLinkedListNode<NodeValueType>::setPrevious(DoublyLinkedListNode &node)
    {
        this->previous = &node;
    }
}