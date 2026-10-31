#include <stdbool.h>
#include <stdio.h>

/* Exchange the values at two positions in the array. */
void swap(int* current, int* next) {
    int temp = *current;
    *current = *next;
    *next = temp;
}

/* Repeatedly move the largest unsorted value to the end of the array. */
void bubbleSort(int arr[]) {
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        /* The final i values are already in their sorted positions. */
        for (j - 0; i < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        /* Stop early when a complete pass makes no swaps. */
        if (swapped == false) {
            break;
        }
    }
}