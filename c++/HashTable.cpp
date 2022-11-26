#include "HashTable.hpp"

using namespace std;

namespace alg {
    template <typename NodeValueType, int TableSize>
    HashTable<NodeValueType, TableSize>::HashTable()
    {
        std::fill(this->data, this->data + TableSize, nullptr);
    }

    template <typename NodeValueType, int TableSize>
    HashTable<NodeValueType, TableSize>::~HashTable()
    {
        for (HashTableNode<NodeValueType> *hastTableNode : this->data) {
            while (hastTableNode) {
                HashTableNode<NodeValueType> *hastTableNodeNext = hastTableNode->getNext();
                delete hastTableNode;

                hastTableNode = hastTableNodeNext;
            }
        }
    }

    template <typename NodeValueType, int TableSize>
    void HashTable<NodeValueType, TableSize>::set(string key, NodeValueType value)
    {
        int index = this->getIndexByKey(key);
        HashTableNode<NodeValueType> *existedNode = this->data[index];

        if (existedNode) {
            while (existedNode->getKey() != key && existedNode->getNext()) {
                existedNode = existedNode->getNext();
            }

            if (existedNode->getKey() == key) {
                existedNode->setValue(value);    
            } else {
                existedNode->setNext(new HashTableNode<NodeValueType> (key, value));
            }
        } else {
            this->data[index] = new HashTableNode<NodeValueType> (key, value);
        }
    }

    template <typename NodeValueType, int TableSize>
    bool HashTable<NodeValueType, TableSize>::get(string const &key, NodeValueType &value) const
    {
        bool result = false;
        int index = this->getIndexByKey(key);
        HashTableNode<NodeValueType> *existedNode = this->data[index];

        while (existedNode && existedNode->getKey() != key && existedNode->getNext()) {
            existedNode = existedNode->getNext();
        }

        if (existedNode && existedNode->getKey() == key) {
            value = existedNode->getValue();
            result = true;
        }

        return result;
    }

    template <typename NodeValueType, int TableSize>
    int HashTable<NodeValueType, TableSize>::getIndexByKey(string const &key) const
    {
        int i = 0;
        for (char const &c: key) {
            i += c;
        }

        return i % TableSize;
    }
}