#include <iostream>
#include "LinkedList.hpp"
#include "LinkedListNode.hpp"
#include "DoublyLinkedList.hpp"
#include "DoublyLinkedListNode.hpp"

using namespace std;
using namespace alg;

const int NODES_COUNT = 10;

int main() 
{
    LinkedList<LinkedListNode<string>> linkedList;
    LinkedListNode<string> *linkedListNode = nullptr;

    for (int i = 0; i < NODES_COUNT; i++) {
        linkedListNode = new LinkedListNode<string>("LinkedList node #" + to_string(i));
        linkedList.append(*linkedListNode);
    }
    
    LinkedListNode<string> *currentLinkedListNode = linkedList.getFirstNode();
    while (currentLinkedListNode) {
        cout << currentLinkedListNode->getValue() << endl;
        currentLinkedListNode = currentLinkedListNode->getNext();
    }

    DoublyLinkedList<DoublyLinkedListNode<string>> doublyLinkedList;
    DoublyLinkedListNode<string> *doublyLinkedListNode = nullptr;

    for (int i = 0; i < NODES_COUNT; i++) {
        doublyLinkedListNode = new DoublyLinkedListNode<string>("DoublyLinkedList node #" + to_string(i));
        doublyLinkedList.append(*doublyLinkedListNode);
    }
    
    DoublyLinkedListNode<string> *currentDoublyLinkedListNode = doublyLinkedList.getFirstNode();
    while (currentDoublyLinkedListNode) {
        cout << "Current node: " << currentDoublyLinkedListNode->getValue();
        if (currentDoublyLinkedListNode->getPrevious()) {
            cout << "; Previous node: " << currentDoublyLinkedListNode->getPrevious()->getValue();
        }
        cout << endl;

        currentDoublyLinkedListNode = currentDoublyLinkedListNode->getNext();
    }

    return 0;
}