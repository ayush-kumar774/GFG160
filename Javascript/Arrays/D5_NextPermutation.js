function nextPermutation(arr) {
      let n = arr.length;
      let i = n - 2;

      while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
      }

      if (i >= 0) {
            let j = n - 1;
            while (arr[j] <= arr[i]) {
                  j--;
            }
            [arr[i], arr[j]] = [arr[j], arr[i]];
      }

      let suffix = arr.slice(i + 1).reverse();
      for (let k = i + 1; k < n; k++) {
            arr[k] = suffix[k - i - 1];
      }
}

let arr1 = [2, 4, 1, 7, 5, 0];
let arr2 = [3, 2, 1];
let arr3 = [3, 4, 2, 5, 1];

[nextPermutation(arr1), nextPermutation(arr2), nextPermutation(arr3)];
console.log(arr1);
console.log(arr2);
console.log(arr3);
