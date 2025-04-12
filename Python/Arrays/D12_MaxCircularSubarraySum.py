def kadane(nums):
    max_ending_here = max_so_far = nums[0]
    for num in nums[1:]:
        max_ending_here = max(num, max_ending_here + num)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far

def circular_subarray_sum(nums):
    total_sum = 0
    curr_min = 0
    min_sum = 0

    max_kadane = kadane(nums)

    for num in nums:
        total_sum += num
        curr_min = min(num, curr_min + num)
        min_sum = min(min_sum, curr_min)

    if max_kadane < 0:
        return max_kadane

    return max(max_kadane, total_sum - min_sum)

arr1 = [8, -8, 9, -9, 10, -11, 12]
arr2 = [10, -3, -4, 7, 6, 5, -4, -1]
arr3 = [-1, 40, -14, 7, 6, 5, -4, -1]

print(circular_subarray_sum(arr1))
print(circular_subarray_sum(arr2))
print(circular_subarray_sum(arr3))