class BubbleSort {

    // Sort the array by repeatedly swapping adjacent values out of order.
    static void bubble_sort(int arr[]) {
        int n = arr.length;
        int i, j, temp;
        boolean swapped;

        for (i = 0; i < n - 1; i++) {
            swapped = false;
            // Values at the end of the array are already sorted after each pass.
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            // Finish early when the array is already sorted.
            if (swapped == false) {
                break;
            }
        }
    }
}