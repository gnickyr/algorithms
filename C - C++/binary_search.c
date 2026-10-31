#include "binary_search.h"

/* Recursively search for x in the sorted range of the array. */
int binary_search(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        /* Return the index when the middle element is the target. */
        if (arr[mid] == x)
            return mid;

        /* A smaller target can only occur in the left half. */
        if (arr[mid] > x)
            return binary_search(arr, low, mid - 1, x);

        /* Otherwise, search the right half. */
        return binary_search(arr, mid + 1, high, x);
    }

    /* An empty search range means the target is not present. */
    return -1;
}