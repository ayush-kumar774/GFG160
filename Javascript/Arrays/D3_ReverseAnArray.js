function reverseArr(arr) {
      let start = 0 ;
      let end = arr.length - 1; 

      while (start < end) {
            [arr[start], arr[end]] = [arr[end], arr[start]];
            start++;
            end--;
      }
}

let arr1 = [1, 4, 3, 2, 6, 5]
let arr2 = [4, 5, 2]
let arr3 = [1]

reverseArr(arr1)
reverseArr(arr2)
reverseArr(arr3)

console.log(arr1)
console.log(arr2)
console.log(arr3)