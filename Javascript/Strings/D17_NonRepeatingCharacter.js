function nonRepeatingChar(s) {
      let freq = new Array(26).fill(0);

      for (let c of s) {
            freq[c.charCodeAt(0) - 97]++;
      }

      for (let c of s){
            if (freq[c.charCodeAt(0) - 97] === 1) {
                  return c;
            }
      }
      
      return '$';
}

console.log(nonRepeatingChar("geeksforgeeks"))
console.log(nonRepeatingChar("racecar"))
console.log(nonRepeatingChar("aabbccc"))