#include "Sort.hpp"
#include "ArrayHelper.hpp"

int sort::bubble(int array[], int size)
{
    int iterationsCount = 0;

    for (int i = 0; i < size; i++) {
        bool hasReshuffle = false;
        for (int j = 0; j < size - i - 1; j++) {
            iterationsCount++;
            if (array[j] > array[j + 1]) {
                array_helper::swap(array, j, j + 1);

                hasReshuffle = true;
            }
        }

        if (!hasReshuffle) {
            break;
        }
    }

    return iterationsCount;
}

int sort::shake(int array[], int size)
{
    int iterationsCount = 0;

    for (int i = 0; i < size; i++) {
        bool hasReshuffle = false;
        for (int j = i; j < size - i - 1; j++) {
            iterationsCount++;
            if (array[j] > array[j + 1]) {
                array_helper::swap(array, j, j + 1);
                
                hasReshuffle = true;
            }
        }

        if (!hasReshuffle) {
            break;
        }

        for (int j = size - 2 - i; j >= i + 1; j--) {
            iterationsCount++;
            if (array[j] < array[j - 1]) {
                array_helper::swap(array, j, j - 1);

                hasReshuffle = true;
            }
        }

        if (!hasReshuffle) {
            break;
        }
    }

    return iterationsCount;
}

int sort::quick(int array[], int size)
{
    int l = 0, r = size - 1, iterationsCount = 0;

    while (l < r) {
        while (array[l] <= array[r] && r > l) {
            iterationsCount++;
            r--;
        }

        if (array[l] > array[r]) {
            array_helper::swap(array, l, r);
        }
        

        while (array[l] <= array[r] && l < r) {
            iterationsCount++;
            l++;
        }

        if (array[l] > array[r]) {
            array_helper::swap(array, l, r);
        }; 
    }

    if (l > 1) {
        iterationsCount += quick(array, l);
    }
    
    if (size - l - 1 > 1) {
        iterationsCount += quick(&array[l + 1], size - l - 1);
    }

    return iterationsCount;
}