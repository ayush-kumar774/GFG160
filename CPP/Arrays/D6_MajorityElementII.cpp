#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayUtils.h"
using namespace std;

vector<int> findMajority(const vector<int> &nums)
{
      int n = nums.size();
      int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;

      for (int num : nums)
      {
            if (num == candidate1)
            {
                  count1++;
            }
            else if (num == candidate2)
            {
                  count2++;
            }
            else if (count1 == 0)
            {
                  candidate1 = num, count1 = 1;
            }
            else if (count2 == 0)
            {
                  candidate2 = num, count2 = 1;
            }
            else
            {
                  count1--, count2--;
            }
      }

      count1 = count2 = 0;
      for (int num : nums)
      {
            if (num == candidate1)
            {
                  count1++;
            }
            else if (num == candidate2)
            {
                  count2++;
            }
      }

      vector<int> result;
      if (count1 > n / 3)
      {
            result.push_back(candidate1);
      }
      if (count2 > n / 3)
      {
            result.push_back(candidate2);
      }
      sort(result.begin(), result.end());

      return result;
}

int main()
{
      vector<int> arr1 = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
      vector<int> arr2 = {1, 2, 3, 4, 5};

      printArray(findMajority(arr1));
      printArray(findMajority(arr2));

      return 0;
}
