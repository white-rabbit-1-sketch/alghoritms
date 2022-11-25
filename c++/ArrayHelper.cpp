#include <iostream>
#include "ArrayHelper.hpp"

using namespace std;

void array_helper::print(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        if (i > 0) {
            cout << ", ";
        }

        cout << array[i];
    }
}

void array_helper::swap(int array[], int firstIndex, int secondIndex)
{
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}