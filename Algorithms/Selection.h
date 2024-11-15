#include <stdio.h>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indexmin = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[indexmin]) {
                indexmin = j;
            }
        }
        swap(&array[i], &array[indexmin]);
    }
}
