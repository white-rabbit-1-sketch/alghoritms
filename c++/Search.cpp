#include "Search.hpp"

bool search::binary(int array[], int size, int value, int &index, int &iterationsCount)
{
    bool result = false;
    int pivotIndex = size / 2;
    iterationsCount++;

    if (array[pivotIndex] == value) {
        index = pivotIndex;
    } else if (value < array[pivotIndex]) {
        result = search::binary(array, pivotIndex, value, index, iterationsCount);
    } else if (size - pivotIndex - 1 > 0) {
        result = search::binary(&array[pivotIndex + 1], size - pivotIndex - 1, value, index, iterationsCount);
        if (result) {
            index += pivotIndex + 1;
        }
    }

    return iterationsCount;
}