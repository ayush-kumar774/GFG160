function myAtoi(s) {
      let i = 0, sign = 1, ans = 0;
      const n = s.length;

      while (i < n && s[i] === ' ') i++;

      if (i < n && (s[i] === '+' || s[i] === '-')) {
            sign = s[i] === '-' ? -1 : 1;
            i++;
      }

      while (i < n && s[i] >= '0' && s[i] <= '9') {
            const digit = s[i].charCodeAt(0) - '0'.charCodeAt(0);

            if (ans > (2 ** 31 - 1 - digit) / 10)
                  return sign === 1 ? 2 ** 31 - 1 : -(2 ** 31);

            ans = ans * 10 + digit;
            i++;
      }

      return ans * sign;
}

console.log(myAtoi("   -42"));          
console.log(myAtoi("4193 with words")); 
