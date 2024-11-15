#include <stdio.h>

void insertionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        while (j > 0 && array[j] < array[j - 1]) {
            swap(&array[j], &array[j - 1]);
            j--;
        }
    }
}