#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayUtils.h"
using namespace std;

int getMinDiff(vector<int> &nums, int k)
{
      int n = (int)nums.size();
      if (n == 1)
            return 0;

      sort(nums.begin(), nums.end());

      int ans = nums[n - 1] - nums[0];

      int smallest = nums[0] + k;
      int largest = nums[n - 1] - k;

      for (int i = 0; i < n - 1; i++)
      {
            int min_element = min(smallest, nums[i + 1] - k);
            int max_element = max(largest, nums[i] + k);

            if (min_element < 0)
            {
                  continue;
            }

            ans = min(ans, max_element - min_element);
      }

      return ans;
}

int main()
{
      vector<int> nums1 = {1, 5, 8, 10};
      int k1 = 2;
      vector<int> nums2 = {3, 9, 12, 16, 20};
      int k2 = 3;
      cout << getMinDiff(nums1, k1) << endl ;
      cout << getMinDiff(nums2, k2) << endl ;

      return 0;
}