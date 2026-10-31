def binary_search(arr, low, high, x):

    # Check base case
    if high >= low:

        mid = low + (high - low) // 2

        # If element is exactly in the middle
        if arr[mid] == x:
            return mid

        # If the element is smalled than mid,
        # search left of mid
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)

        # Else search right of mid
        else:
            return binary_search(arr, mid + 1, high, x)

    # The element is not present in the array
    else:
        return -1