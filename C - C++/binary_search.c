
int binary_search(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        /* If the element is at the middle */
        if (arr[mid] == x)
            return mid;

        /* If the element is smalled than mid,
        it can only be present left of mid */
        if (arr[mid] > x)
            return binary_search(arr, low, mid - 1, x);

        /* Else it can only be present right of mid */
        return binary_search(arr, mid + 1, high, x);
    }

    /* If none is satisfied, then the element
    does not exist in the array */
    return -1;
}