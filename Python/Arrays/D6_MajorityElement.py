def find_majority(nums):
    n = len(nums)
    candidate1, candidate2 = None, None
    count1 = count2 = 0

    for num in nums:
        if num == candidate1:
            count1 += 1
        elif num == candidate2:
            count2 += 1
        elif count1 == 0:
            candidate1, count1 = num, 1
        elif count2 == 0:
            candidate2, count2 = num, 1
        else:
            count1 -= 1
            count2 -= 1

    count1 = count2 = 0
    for num in nums:
        if num == candidate1:
            count1 += 1
        elif num == candidate2:
            count2 += 1

    result = []
    if count1 > n // 3:
        result.append(candidate1)
    if count2 > n // 3:
        result.append(candidate2)

    return sorted(result)

arr1 = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
arr2 = [1, 2, 3, 4, 5]

print(find_majority(arr1))  
print(find_majority(arr2)) 
