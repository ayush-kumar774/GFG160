#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> computeLPS(string pat)
{
      int m = pat.size();
      vector<int> lps(m, 0);
      int len = 0;

      for (int i = 1; i < m;)
      {
            if (pat[i] == pat[len])
            {
                  lps[i++] = ++len;
            }
            else if (len != 0)
            {
                  len = lps[len - 1];
            }
            else
            {
                  lps[i++] = 0;
            }
      }
      return lps;
}

vector<int> KMPSearch(string txt, string pat)
{
      vector<int> result;
      vector<int> lps = computeLPS(pat);
      int i = 0, j = 0, n = txt.size(), m = pat.size();

      while (i < n)
      {
            if (txt[i] == pat[j])
            {
                  i++;
                  j++;
            }

            if (j == m)
            {
                  result.push_back(i - j);
                  j = lps[j - 1];
            }
            else if (i < n && txt[i] != pat[j])
            {
                  if (j != 0)
                  {
                        j = lps[j - 1];
                  }
                  else
                  {
                        i++;
                  }
            }
      }

      return result;
}

int main()
{
      string txt = "aabaacaadaabaaba";
      string pat = "aaba";
      vector<int> indices = KMPSearch(txt, pat);
      for (int idx : indices)
      {
            cout << idx << " ";
      }
      cout << endl;
      return 0;
}