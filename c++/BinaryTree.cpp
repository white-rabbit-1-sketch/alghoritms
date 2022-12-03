#include "BinaryTree.hpp"

#include <iostream>

using namespace std;

namespace alg {
    BinaryTreeNode *BinaryTree::getNodeByValue(int value, int &iterationsCount) const
    {
        iterationsCount = 0;
        BinaryTreeNode *existedBinaryTreeNode = this->rootNode;

        cout << "2" << endl;
        while (existedBinaryTreeNode) {
            iterationsCount++;
            if (value == existedBinaryTreeNode->getValue()) {
                cout << "FOUNDED" << endl;

                break;
            } else if (value > existedBinaryTreeNode->getValue()) {
                existedBinaryTreeNode = existedBinaryTreeNode->getRight();
            } else {
                existedBinaryTreeNode = existedBinaryTreeNode->getLeft();
            }
        }

        return existedBinaryTreeNode;
    }

    void BinaryTree::push(int value)
    {
        BinaryTreeNode *newBinaryTreeNode = new BinaryTreeNode(value);

        if (!this->rootNode) {
            this->rootNode = newBinaryTreeNode;
        } else {
            BinaryTreeNode *existedBinaryTreeNode = this->rootNode;

            while (existedBinaryTreeNode) {
                if (value >= existedBinaryTreeNode->getValue()) {
                    if (existedBinaryTreeNode->getRight()) {
                        existedBinaryTreeNode = existedBinaryTreeNode->getRight();
                    } else {
                        existedBinaryTreeNode->setRight(*newBinaryTreeNode);

                        break;
                    }
                } else {
                    if (existedBinaryTreeNode->getLeft()) {
                        existedBinaryTreeNode = existedBinaryTreeNode->getLeft();
                    } else {
                        existedBinaryTreeNode->setLeft(*newBinaryTreeNode);

                        break;
                    }
                }
            }
        }
    }
}