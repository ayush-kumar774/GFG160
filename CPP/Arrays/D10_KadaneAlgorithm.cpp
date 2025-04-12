#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayUtils.h"
using namespace std;

int maxSubarraySum(vector<int> &nums) {
      int n = nums.size();

      if (n == 0) {
            return -1;
      }
      int maxSum = nums[0];
      int currentSum = nums[0];

      for (int i = 1 ; i < n ; i++) {
            currentSum = max(currentSum, currentSum + nums[i]);
            maxSum = max(currentSum, maxSum);
      }

      return maxSum;
}

int main() {
      vector<int> nums1 = {2, 3, -8, 7, -1, 2, 3};
      vector<int> nums2 = {-2, -4};
      vector<int> nums3 = {5, 4, 1, 7, 8};

      cout << maxSubarraySum(nums1) << endl ;
      cout << maxSubarraySum(nums2) << endl ;
      cout << maxSubarraySum(nums3) << endl ;

      return 0;
}     