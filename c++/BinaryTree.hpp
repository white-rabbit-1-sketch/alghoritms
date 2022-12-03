#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "BinaryTreeNode.hpp"

using namespace std;

namespace alg {
    class BinaryTree
    {
        protected:
            BinaryTreeNode *rootNode = nullptr;
        public:
            BinaryTreeNode *getNodeByValue(int value, int &iterationsCount) const;
            void push(int value);
    };
}

#endif