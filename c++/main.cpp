#include <iostream>
#include <array>
#include "LinkedList.hpp"
#include "LinkedListNode.hpp"
#include "DoublyLinkedList.hpp"
#include "DoublyLinkedListNode.hpp"
#include "Sort.hpp"
#include "ArrayHelper.hpp"

using namespace std;
using namespace alg;

const int NODES_COUNT = 10;

int main() 
{
    LinkedList<string> linkedList;
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

    DoublyLinkedList<string> doublyLinkedList;
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

    std::array<int,15> initialArray = {5, 1, 4, 2, 8, 5, 1, 4, 2, 8, 5, 1, 4, 2, 8};
    std::array<int,15> bubbleSortedArray, shakeSortedArray, quickSortedArray;
    bubbleSortedArray = shakeSortedArray = quickSortedArray = initialArray;
    int iterationsCount = 0;

    cout << "Intitial array: ";
    array_helper::print(&initialArray[0], std::size(initialArray));
    cout << endl;

    iterationsCount = sort::bubble(&bubbleSortedArray[0], std::size(bubbleSortedArray));
    cout << "Buble sorted array [itarationsCount=" << iterationsCount << "]: ";
    array_helper::print(&bubbleSortedArray[0], std::size(bubbleSortedArray));
    cout << endl;

    iterationsCount = sort::shake(&shakeSortedArray[0], std::size(shakeSortedArray));
    cout << "Shake sorted array [itarationsCount=" << iterationsCount << "]: ";
    array_helper::print(&shakeSortedArray[0], std::size(shakeSortedArray));
    cout << endl;

    iterationsCount = sort::quick(&quickSortedArray[0], std::size(quickSortedArray));
    cout << "Quick sorted array [itarationsCount=" << iterationsCount << "]: ";
    array_helper::print(&quickSortedArray[0], std::size(quickSortedArray));
    cout << endl;

    return 0;
}