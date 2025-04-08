function findMajority(nums) {
      const n = nums.length;
      let candidate1 = null, candidate2 = null;
      let count1 = 0, count2 = 0;

      for (let num of nums) {
            if (num === candidate1) count1++;
            else if (num === candidate2) count2++;
            else if (count1 === 0) [candidate1, count1] = [num, 1];
            else if (count2 === 0) [candidate2, count2] = [num, 1];
            else {
                  count1--;
                  count2--;
            }
      }

      count1 = count2 = 0;
      for (let num of nums) {
            if (num === candidate1) count1++;
            else if (num === candidate2) count2++;
      }

      const result = [];
      if (count1 > Math.floor(n / 3)) result.push(candidate1);
      if (count2 > Math.floor(n / 3)) result.push(candidate2);

      return result.sort((a, b) => a - b);
}

const arr1 = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6];
const arr2 = [1, 2, 3, 4, 5];

console.log(findMajority(arr1));
console.log(findMajority(arr2));
