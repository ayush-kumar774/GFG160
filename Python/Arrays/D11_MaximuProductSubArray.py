def max_product(nums):
    if not nums:
        return -1

    max_product = running_max = running_min = nums[0]

    for num in nums[1:]:
        if num < 0:
            running_max, running_min = running_min, running_max  

        running_max = max(num, running_max * num)
        running_min = min(num, running_min * num)

        max_product = max(max_product, running_max)

    return max_product

print(max_product([-2, 6, -3, -10, 0, 2]))  
print(max_product([1, -3, -10, 0, 6]))     
print(max_product([2, 3, 4]))              