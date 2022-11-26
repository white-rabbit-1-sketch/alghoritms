#include "HashTableNode.hpp"

using namespace std;

namespace alg {
    template <typename ValueType>
    HashTableNode<ValueType>::HashTableNode(string const &key, ValueType const value)
    {
        this->key = key;
        this->value = value;
    }

    template <typename ValueType>
    string HashTableNode<ValueType>::getKey() const
    {
        return this->key;
    }

    template <typename ValueType>
    ValueType HashTableNode<ValueType>::getValue() const
    {
        return this->value;
    }

    template <typename ValueType>
    void HashTableNode<ValueType>::setValue(ValueType const value)
    {
        this->value = value;
    }

    template <typename ValueType>
    HashTableNode<ValueType> *HashTableNode<ValueType>::getNext() const
    {
        return this->next;
    }

    template <typename ValueType>
    void HashTableNode<ValueType>::setNext(HashTableNode *next)
    {
        this->next = next;   
    }
}