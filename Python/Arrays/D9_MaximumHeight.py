def get_min_diff(nums, k):
    n = len(nums)
    if n == 1:
        return 0

    nums.sort()

    ans = nums[-1] - nums[0]
    smallest = nums[0] + k
    largest = nums[-1] - k

    for i in range(n - 1):
        min_element = min(smallest, nums[i + 1] - k)
        max_element = max(largest, nums[i] + k)

        if min_element < 0:
            continue

        ans = min(ans, max_element - min_element)

    return ans

print(get_min_diff([1, 5, 8, 10], 2))       
print(get_min_diff([3, 9, 12, 16, 20], 3))  