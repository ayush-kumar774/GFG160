#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kadane(const vector<int> &nums)
{
      int maxEndingHere = nums[0], maxSoFar = nums[0];
      for (size_t i = 1; i < nums.size(); i++)
      {
            maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
            maxSoFar = max(maxSoFar, maxEndingHere);
      }
      return maxSoFar;
}

int circularSubarraySum(vector<int> &nums)
{
      int totalSum = 0, currMin = 0, minSum = 0;
      int maxKadane = kadane(nums);

      for (int num : nums)
      {
            totalSum += num;
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);
      }

      if (maxKadane < 0)
            return maxKadane;

      return max(maxKadane, totalSum - minSum);
}

int main()
{
      vector<int> arr1 = {8, -8, 9, -9, 10, -11, 12};
      vector<int> arr2 = {10, -3, -4, 7, 6, 5, -4, -1};
      vector<int> arr3 = {-1, 40, -14, 7, 6, 5, -4, -1};

      cout << circularSubarraySum(arr1) << endl;
      cout << circularSubarraySum(arr2) << endl;
      cout << circularSubarraySum(arr3) << endl;
      return 0;
}
