def pushZerosToEnd(arr):
    count = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[i], arr[count] = arr[count], arr[i]
            count += 1

arr1 = [1, 2, 0, 4, 3, 0, 5, 0]
arr2 = [10, 20, 30]
arr3 = [0, 0]

pushZerosToEnd(arr1)
pushZerosToEnd(arr2)
pushZerosToEnd(arr3)

print(arr1)
print(arr2)
print(arr3)