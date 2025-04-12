function getMinDiff(nums, k) {
      const n = nums.length;
      if (n === 1) return 0;

      nums.sort((a, b) => a - b); 

      let ans = nums[n - 1] - nums[0];

      let smallest = nums[0] + k;
      let largest = nums[n - 1] - k;

      for (let i = 0; i < n - 1; i++) {
            let minElement = Math.min(smallest, nums[i + 1] - k);
            let maxElement = Math.max(largest, nums[i] + k);

            if (minElement < 0) continue;

            ans = Math.min(ans, maxElement - minElement);
      }

      return ans;
}

console.log(getMinDiff([1, 5, 8, 10], 2));   
console.log(getMinDiff([3, 9, 12, 16, 20], 3)); 