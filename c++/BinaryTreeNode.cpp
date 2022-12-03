#include "BinaryTreeNode.hpp"

using namespace std;

namespace alg {
    BinaryTreeNode::BinaryTreeNode(int value): value{value}
    {
        
    }

    int BinaryTreeNode::getValue() const
    {
        return this->value;
    }

    BinaryTreeNode *BinaryTreeNode::getLeft() const
    {
        return this->left;
    }

    void BinaryTreeNode::setLeft(BinaryTreeNode &binaryTreeNode)
    {
        this->left = &binaryTreeNode;
    }

    BinaryTreeNode *BinaryTreeNode::getRight() const
    {
        return this->right;
    }

    void BinaryTreeNode::setRight(BinaryTreeNode &binaryTreeNode)
    {
        this->right = &binaryTreeNode;
    }   
}