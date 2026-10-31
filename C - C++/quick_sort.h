#ifndef QUICK_SORT_H
#define QUICK_SORT_H

void swap(int *a, int *b);

int partition(int arr[], int low, int high);

void quick_sort(int arr[], int low, int high);

#endif