function maxProduct(nums) {
      if (nums.length === 0) return -1;

      let maxProduct = nums[0];
      let runningMax = nums[0];
      let runningMin = nums[0];

      for (let i = 1; i < nums.length; i++) {
            if (nums[i] < 0) {
                  [runningMax, runningMin] = [runningMin, runningMax]; 
            }

            runningMax = Math.max(nums[i], runningMax * nums[i]);
            runningMin = Math.min(nums[i], runningMin * nums[i]);

            maxProduct = Math.max(maxProduct, runningMax);
      }

      return maxProduct;
}

// Example usage:
console.log(maxProduct([-2, 6, -3, -10, 0, 2])); 
console.log(maxProduct([1, -3, -10, 0, 6]));     
console.log(maxProduct([2, 3, 4]));              