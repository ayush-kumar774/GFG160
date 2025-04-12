function kadane(nums) {
      let maxEndingHere = nums[0];
      let maxSoFar = nums[0];

      for (let i = 1; i < nums.length; i++) {
            maxEndingHere = Math.max(nums[i], maxEndingHere + nums[i]);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);
      }
      return maxSoFar;
}

function circularSubarraySum(nums) {
      let totalSum = 0;
      let currMin = 0;
      let minSum = 0;
      let maxKadane = kadane(nums);

      for (let num of nums) {
            totalSum += num;
            currMin = Math.min(num, currMin + num);
            minSum = Math.min(minSum, currMin);
      }

      if (maxKadane < 0) return maxKadane;

      return Math.max(maxKadane, totalSum - minSum);
}

const arr1 = [8, -8, 9, -9, 10, -11, 12];
const arr2 = [10, -3, -4, 7, 6, 5, -4, -1];
const arr3 = [-1, 40, -14, 7, 6, 5, -4, -1];

console.log(circularSubarraySum(arr1));
console.log(circularSubarraySum(arr2));
console.log(circularSubarraySum(arr3));
