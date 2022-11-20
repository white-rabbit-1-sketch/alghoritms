#include <iostream>
#include "LinkedList.hpp"
#include "LinkedListNode.hpp"

using namespace std;

const int NODES_COUNT = 10;

int main() 
{
    LinkedList linkedList = LinkedList();
    LinkedListNode *linkedListNode;

    for (int i = 0; i < NODES_COUNT; i++) {
        linkedListNode = new LinkedListNode("Node #" + to_string(i));
        linkedList.append(*linkedListNode);
    }

    LinkedListNode *currentNode = linkedList.getFirstNode();
    while (currentNode) {
        cout << currentNode->getValue() << endl;
        currentNode = currentNode->getNext();
    }

    return 0;
}