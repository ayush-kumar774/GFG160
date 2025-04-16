function areAnagrams(s1, s2) {
      if (s1.length !== s2.length) {
            return false;
      }
      const freq = new Array(26).fill(0);

      for (let i = 0 ; i < s1.length; i++) {
            freq[s1.charCodeAt(i) - 97]++;
            freq[s2.charCodeAt(i) - 97]--;
      }

      return freq.every(count => count === 0);
}


console.log(areAnagrams("geeks", "keesg")); 
console.log(areAnagrams("abc", "abd"));    