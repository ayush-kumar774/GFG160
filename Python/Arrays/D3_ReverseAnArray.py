def reverseArray(arr):
    start = 0
    end = len(arr) - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1


arr1 = [1, 4, 3, 2, 6, 5]
arr2 = [4, 5, 2]
arr3 = [1]

reverseArray(arr1)
reverseArray(arr2)
reverseArray(arr3)


print(arr1)
print(arr2)
print(arr3)