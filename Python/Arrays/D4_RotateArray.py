def rotateArray(arr, d):
    n = len(arr)
    d = d % n

    reverseArray(arr, 0, d - 1)
    reverseArray(arr, d, n - 1)
    reverseArray(arr, 0, n - 1)


def reverseArray(arr, start, end):
      while start < end:
            arr[start] , arr[end] = arr[end], arr[start]
            start = start + 1
            end = end - 1


arr1 = [1, 2, 3, 4, 5]
arr2 = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
arr3 = [7, 3, 9, 1]

d1 = 2
d2 = 3
d3 = 9

rotateArray(arr1, d1)
rotateArray(arr2, d2)
rotateArray(arr3, d3)


print(arr1)
print(arr2)
print(arr3)