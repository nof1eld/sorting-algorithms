#include <stdio.h>
#include "./Algorithms/Bubble.h"
#include "./Algorithms/Insertion.h"
#include "./Algorithms/Selection.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int choice, n;

    printf("Welcome to Sorting Algorithm Program!\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nChoose sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("3. Selection Sort\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nPerforming Bubble Sort...\n");
        bubbleSort(array, n);
        break;
    case 2:
        printf("\nPerforming Insertion Sort...\n");
        insertionSort(array, n);
        break;
    case 3:
        printf("\nPerforming Selection Sort...\n");
        selectionSort(array, n);
        break;
    default:
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
