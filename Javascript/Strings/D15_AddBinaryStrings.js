function addBinary(s1, s2) {
      let i = s1.length - 1, j = s2.length - 1, carry = 0;
      let res = [];

      while (i >= 0 || j >= 0 || carry) {
            let sum = carry;
            if (i >= 0) sum += s1[i--] - '0';
            if (j >= 0) sum += s2[j--] - '0';
            res.push(sum % 2);
            carry = Math.floor(sum / 2);
      }

      const result = res.reverse().join('').replace(/^0+/, '');
      return result === '' ? '0' : result;
}

console.log(addBinary("1101", "111"));  
console.log(addBinary("00100", "010")); 
