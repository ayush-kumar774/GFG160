function missingNumber(arr) {
      const n = arr.length;

      for (let i = 0; i < n; i++) {
            while (
                  arr[i] > 0 &&
                  arr[i] <= n &&
                  arr[arr[i] - 1] !== arr[i]
            ) {
                  let correctIdx = arr[i] - 1;
                  [arr[i], arr[correctIdx]] = [arr[correctIdx], arr[i]];
            }
      }

      for (let i = 0; i < n; i++) {
            if (arr[i] !== i + 1) {
                  return i + 1;
            }
      }

      return n + 1;
}

console.log(missingNumber([2, -3, 4, 1, 1, 7])); 
console.log(missingNumber([1, 2, 3, 4, 5])); 
console.log(missingNumber([-5, -2, -1])); 
