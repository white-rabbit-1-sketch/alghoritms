#ifndef HASH_TABLE_NODE_NODE_H
#define HASH_TABLE_NODE_NODE_H

#include <string>

using namespace std;

namespace alg {
    template <typename ValueType>
    class HashTableNode
    {
        protected:
            string key;
            ValueType value;
            HashTableNode *next = nullptr;

        public:
            HashTableNode(string const &key, ValueType const value);
            string getKey() const;
            ValueType getValue() const;
            void setValue(ValueType const value);
            HashTableNode *getNext() const;
            void setNext(HashTableNode *next);
    };
}

#include "HashTableNode.cpp"

#endif