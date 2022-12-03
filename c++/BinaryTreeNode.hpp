#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

#include <string>

using namespace std;

namespace alg {
    class BinaryTreeNode
    {
        protected:
            int value = 0;
            BinaryTreeNode *left = nullptr;
            BinaryTreeNode *right = nullptr;
        public:
            BinaryTreeNode(int value);
            int getValue() const;
            BinaryTreeNode *getLeft() const;
            void setLeft(BinaryTreeNode &binaryTreeNode);
            BinaryTreeNode *getRight() const;
            void setRight(BinaryTreeNode &binaryTreeNode);
    };
}

#endif