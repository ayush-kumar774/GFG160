function pushZeroesToEnd(arr) {
      let index = 0;

      for (let i = 0; i < arr.length; i++) {
            if (arr[i] !== 0) {
                  [arr[i], arr[index]] = [arr[index], arr[i]]; // Swap using destructuring
                  index++;
            }
      }
}

let arr1 = [1, 2, 0, 4, 3, 0, 5, 0];
let arr2 = [10, 20, 30];
let arr3 = [0, 0];

pushZeroesToEnd(arr1);
pushZeroesToEnd(arr2);
pushZeroesToEnd(arr3);

console.log(arr1);
console.log(arr2);
console.log(arr3);