# Repeatedly move the largest unsorted value to the end of the list.
def bubble_sort(arr):
    n = len(arr)

    for i in range(n):
        swapped = False

        # The last i values are already in their final positions.
        for j in range(0, n - i - 1):

            if arr[j] > arr[j + 1]:
                arr[j], arr[j+1] = arr[j + 1], arr[j]
                swapped = True

        # Stop early when a complete pass makes no swaps.
        if (swapped == False):
            break