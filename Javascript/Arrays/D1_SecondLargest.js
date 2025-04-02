function getSecondLargest(arr) {
      const n = arr.length;
      if (n < 2) return -1;
      
      let largest = -Infinity;
      let secondLargest = -Infinity;

      for (let i = 0 ; i < n ; i++) {
            if (arr[i] > largest) {
                  secondLargest = largest;
                  largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] !== largest) {
                  secondLargest = arr[i];
            }
      }

      return (secondLargest === -Infinity) ? -1 : secondLargest;
}

console.log(getSecondLargest([12, 35, 1, 10, 34, 1])); 
console.log(getSecondLargest([10]));
console.log(getSecondLargest([5, 5, 5])); 
console.log(getSecondLargest([-1, -5, -3])); 