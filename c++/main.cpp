#include <iostream>
#include <array>
#include "LinkedList.hpp"
#include "LinkedListNode.hpp"
#include "DoublyLinkedList.hpp"
#include "DoublyLinkedListNode.hpp"
#include "Sort.hpp"
#include "ArrayHelper.hpp"
#include "HashTableNode.hpp"
#include "HashTable.hpp"
#include "Queue.hpp"
#include "DoublyQueue.hpp"
#include "Search.hpp"

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
    cout << "Buble sorted array [iterationsCount=" << iterationsCount << "]: ";
    array_helper::print(&bubbleSortedArray[0], std::size(bubbleSortedArray));
    cout << endl;

    iterationsCount = sort::shake(&shakeSortedArray[0], std::size(shakeSortedArray));
    cout << "Shake sorted array [iterationsCount=" << iterationsCount << "]: ";
    array_helper::print(&shakeSortedArray[0], std::size(shakeSortedArray));
    cout << endl;

    iterationsCount = sort::quick(&quickSortedArray[0], std::size(quickSortedArray));
    cout << "Quick sorted array [iterationsCount=" << iterationsCount << "]: ";
    array_helper::print(&quickSortedArray[0], std::size(quickSortedArray));
    cout << endl;

    HashTable<int, 10> hashTable;

    hashTable.set("test1", 4);
    hashTable.set("test1", 5);
    hashTable.set("test2", 10);
    hashTable.set("test3", 15);

    int hashTableNodeValue = 0; 

    hashTable.get("test1", hashTableNodeValue);
    cout << "[HashTable] Test1 value: " << hashTableNodeValue << endl;

    hashTable.get("test2", hashTableNodeValue);
    cout << "[HashTable] Test2 value: " << hashTableNodeValue << endl;

    hashTable.get("test3", hashTableNodeValue);
    cout << "[HashTable] Test3 value: " << hashTableNodeValue << endl;

    Queue<string> queue;
    string queueValue;

    queue.push(queueValue = "test value 1");
    queue.push(queueValue = "test value 2");
    queue.push(queueValue = "test value 3");

    queue.pop(queueValue);
    cout << "[Queue] Value 1: " << queueValue << endl;

    queue.pop(queueValue);
    cout << "[Queue] Value 2: " << queueValue << endl;

    queue.pop(queueValue);
    cout << "[Queue] Value 3: " << queueValue << endl;

    DoublyQueue<string> doublyQueue;

    doublyQueue.push(queueValue = "test value 1");
    doublyQueue.push(queueValue = "test value 2");
    doublyQueue.push(queueValue = "test value 3");

    doublyQueue.popBack(queueValue);
    cout << "[DoublyQueue] Value 3 from back: " << queueValue << endl;

    doublyQueue.pop(queueValue);
    cout << "[DoublyQueue] Value 1 from front: " << queueValue << endl;

    doublyQueue.popBack(queueValue);
    cout << "[DoublyQueue] Value 2 from back: " << queueValue << endl;

    int searchArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchArrayIndex = -1;
    iterationsCount = 0;

    search::binary(searchArray, std::size(searchArray), 7, searchArrayIndex, iterationsCount);
    cout << "[Search:Binary] Index of value: " << searchArrayIndex << ", Iterations count: " << iterationsCount << endl;

    return 0;
}