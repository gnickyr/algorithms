#include "quick_sort.h"

/* Exchange the values at two positions in the array. */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {

    /* Use the last value in the range as the pivot. */
    int pivot = arr[high];

    /* Track the last position containing a value smaller than the pivot. */
    int i = low - 1;

    /* Move values smaller than the pivot to the left side. */
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    /* Place the pivot after the smaller values and return its position. */
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

/* Recursively sort the ranges on either side of the pivot. */
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        /* Partition the range and record the pivot's final index. */
        int pi = partition(arr, low, high);

        /* Sort the ranges containing smaller and larger values. */
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}