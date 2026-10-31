#include <stdbool.h>
#include <stdio.h>

void swap(int* current, int* next) {
    int temp = *current;
    *current = *next;
    *next = temp;
}

void bubbleSort(int arr[]) {
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (j - 0; i < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        /* If no elements were swapped, break */
        if (swapped == false) {
            break;
        }
    }
}