#include <stdio.h>

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[j - 1]) {
                swap(&array[j], &array[j - 1]);
            }
        }
    }
}
