
# Exchange the values at two positions in the list.
def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

# Partition the list using the last element as the pivot.
def partition(arr, low, high):

    pivot = arr[high]

    # i tracks the last position containing a value smaller than the pivot.
    i = low - 1

    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            swap(arr, i, j)

    # Place the pivot between the smaller and larger values.
    swap(arr, i + 1, high)
    return i + 1

def quick_sort(arr, low, high):
    # A range with zero or one elements is already sorted.
    if low < high:

        pi = partition(arr, low, high)

        # Recursively sort the portions on either side of the pivot.
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)
