#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string s1, string s2)
{
      int i = s1.length() - 1, j = s2.length() - 1, carry = 0;
      string res = "";

      while (i >= 0 || j >= 0 || carry)
      {
            int sum = carry;
            if (i >= 0)
                  sum += s1[i--] - '0';
            if (j >= 0)
                  sum += s2[j--] - '0';
            res += (sum % 2 + '0');
            carry = sum / 2;
      }

      reverse(res.begin(), res.end());

      int index = 0;
      while (index < res.length() && res[index] == '0')
      {
            index++;
      }

      return (index == res.length()) ? "0" : res.substr(index);
}
int main()
{
      string s1 = "1101", s2 = "111";
      string s3 = "00100", s4 = "010";

      cout << addBinary(s1, s2) << endl; 
      cout << addBinary(s3, s4) << endl; 
      return 0;
}
