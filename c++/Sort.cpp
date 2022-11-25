#include "Sort.hpp"

int sort::bubble(int array[], int size)
{
    int iterationsCount = 0;

    for (int i = 0; i < size; i++) {
        bool hasReshuffle = false;
        for (int j = 0; j < size - i - 1; j++) {
            iterationsCount++;
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

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
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                hasReshuffle = true;
            }
        }

        if (!hasReshuffle) {
            break;
        }

        for (int j = size - 2 - i; j >= i + 1; j--) {
            iterationsCount++;
            if (array[j] < array[j - 1]) {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;

                hasReshuffle = true;
            }
        }

        if (!hasReshuffle) {
            break;
        }
    }

    return iterationsCount;
}