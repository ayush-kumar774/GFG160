def missing_number(arr):
    n = len(arr)

    for i in range(n):
        while (1 <= arr[i] <= n) and (arr[arr[i] - 1] != arr[i]):
            correct_idx = arr[i] - 1
            arr[i], arr[correct_idx] = arr[correct_idx], arr[i]

    for i in range(n):
        if arr[i] != i + 1:
            return i + 1

    return n + 1


arr1 = [2, -3, 4, 1, 1, 7]
arr2 = [1, 2, 3, 4, 5]
arr3 = [-5, -2, -1]
print(missing_number(arr1)) 
print(missing_number(arr2)) 
print(missing_number(arr3)) 
