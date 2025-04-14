#include <iostream>
#include <climits>
using namespace std;

int myAtoi(string s)
{
      int i = 0, n = s.length(), sign = 1, ans = 0;

      while (i < n && s[i] == ' ')
            i++;

      if (i < n && (s[i] == '+' || s[i] == '-'))
      {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
      }

      while (i < n && isdigit(s[i]))
      {
            int digit = s[i] - '0';

            if (ans > (INT_MAX - digit) / 10)
                  return (sign == 1) ? INT_MAX : INT_MIN;

            ans = ans * 10 + digit;
            i++;
      }

      return ans * sign;
}

int main()
{
      cout << myAtoi("   -42") << endl;          // -42
      cout << myAtoi("4193 with words") << endl; // 4193
      return 0;
}
