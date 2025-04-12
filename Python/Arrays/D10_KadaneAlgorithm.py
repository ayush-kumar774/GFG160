def max_subarray_sum(nums):
    if not nums:
        return -1

    max_sum = current_sum = nums[0]

    for num in nums[1:]:
        current_sum = max(num, current_sum + num)
        max_sum = max(max_sum, current_sum)

    return max_sum

print(max_subarray_sum([2, 3, -8, 7, -1, 2, 3]))  
print(max_subarray_sum([-2, -4]))               
print(max_subarray_sum([5, 4, 1, 7, 8]))         