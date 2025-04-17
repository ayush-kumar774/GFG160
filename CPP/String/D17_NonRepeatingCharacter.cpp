#include <iostream>
#include <string>

using namespace std;

char nonRepeatingChar(string& s) {
      int freq[26];
      std::fill(freq, freq + 26, 0); 

      for (auto ch : s) {
            freq[ch - 'a'] ++;
      }

      for (auto ch : s) {
            if (freq[ch - 'a'] == 1) {
                  return ch;
            }
      }
      
      return '$';
}

int main() {
      string s1 = "geeksforgeeks", s2 = "racecar", s3 = "aabbccc";
      cout << nonRepeatingChar(s1) << endl ;
      cout << nonRepeatingChar(s2) << endl ;
      cout << nonRepeatingChar(s3) << endl ;
      return 0;
}