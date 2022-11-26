#ifndef HASH_TABLE_NODE_H
#define HASH_TABLE_NODE_H

#include <string>
#include <vector>
#include "HashTableNode.hpp"

using namespace std;

namespace alg {
    template <typename NodeValueType, int TableSize>
    class HashTable
    {
        protected:
            HashTableNode<NodeValueType> *data[TableSize];
            int getIndexByKey(string const &key) const;

        public:
            explicit HashTable();
            ~HashTable();
            void set(string key, NodeValueType value);
            bool get(string const &key, NodeValueType &value) const;
    };
}

#include "HashTable.cpp"

#endif