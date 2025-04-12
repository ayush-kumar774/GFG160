function maxSubarraySum(nums) {
      if (nums.length === 0) return -1;

      let maxSum = nums[0];
      let currentSum = nums[0];

      for (let i = 1; i < nums.length; i++) {
            currentSum = Math.max(nums[i], currentSum + nums[i]);
            maxSum = Math.max(maxSum, currentSum);
      }

      return maxSum;
}

console.log(maxSubarraySum([2, 3, -8, 7, -1, 2, 3]));  
console.log(maxSubarraySum([-2, -4]));                
console.log(maxSubarraySum([5, 4, 1, 7, 8]));          