# Recursively search for x in the sorted portion of arr.
def binary_search(arr, low, high, x):

    # Continue while the search range contains at least one element.
    if high >= low:

        mid = low + (high - low) // 2

        # Return the index when the middle element is the target.
        if arr[mid] == x:
            return mid

        # A smaller target can only occur in the left half.
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)

        # Otherwise, search the right half.
        else:
            return binary_search(arr, mid + 1, high, x)

    # An empty search range means the target is not present.
    else:
        return -1