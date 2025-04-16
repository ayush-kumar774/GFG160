#include <iostream>
#include <string>
using namespace std;

bool areAnagrams(string &s1, string &s2)
{
      if (s1.size() != s2.size())
      {
            return false;
      }

      vector<int> freq(26, 0);

      for (size_t i = 0; i < s1.size(); i++)
      {
            freq[s1[i] - 'a']++;
            freq[s1[i] - 'a']--;
      }

      for (int count : freq)
      {
            if (count != 0)
            {
                  return false;
            }
      }

      return true;
}

int main()
{
      string s1 = "geeks", s2 = "keesg", s3 = "hello", s4 = "hell" ;
      cout << areAnagrams(s1, s2) << endl;
      cout << areAnagrams(s3, s4) << endl; 
}
