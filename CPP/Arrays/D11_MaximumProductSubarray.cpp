#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayUtils.h"
using namespace std;

int maxProduct (vector<int> &nums) {
      int n = nums.size();

      if (n == 0) {
            return -1;
      }

      int maxProduct = nums[0];
      int runningMaxProduct = nums[0];
      int runningMinProduct = nums[0];

      for (int i = 1 ; i < n ; i++) {
            if (nums[i] < 0) {
                  swap(runningMaxProduct, runningMinProduct);
            }
            runningMaxProduct = max(runningMaxProduct * nums[i], nums[i]);
            runningMinProduct = min(runningMinProduct * nums[i], nums[i]);

            maxProduct = max(maxProduct, runningMaxProduct);
      }

      return maxProduct;
}

int main() {
      vector<int> nums1 = {-2, 6, -3, -10, 0, 2};
      vector<int> nums2 = {1, -3, -10, 0, 6};
      vector<int> nums3 = {2, 3, 4};

      cout << maxProduct(nums1) << endl ;
      cout << maxProduct(nums2) << endl ;
      cout << maxProduct(nums3) << endl ;

      return 0;
}