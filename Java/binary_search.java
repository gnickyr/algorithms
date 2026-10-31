class BinarySearch {
    static int binary_search(int arr[], int low, int high, int x) {

        /* Check base case */
        if (high >= low) {

            int mid = low + (high - low) / 2;

            /* If the element is exactly at middle */
            if (arr[mid] == x) {
                return mid;
            }

            /* If it is smaller than mid, 
            search left of mid */
            else if (arr[mid] > x) {
                return binary_search(arr, low, mid - 1, x);
            }

            /* Else, search right of mid */
            else {
                return binary_search(arr, mid + 1, high, x);
            }
        }

        /* The element is not present in the array */
        else {
            return -1;
        }
    }
}