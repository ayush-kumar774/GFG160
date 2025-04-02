#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
      int count = 0;
      for (size_t i = 0 ; i < nums.size() ; i++) {
            if (nums[i] != 0) {
                  swap(nums[i], nums[count]);
                  count++;
            }
      }
}

void printArray(const vector<int> &arr)
{
      for (int num : arr)
      {
            cout << num << " ";
      }
      cout << endl;
}

int main()
{
      vector<int> arr1 = {1, 2, 0, 4, 3, 0, 5, 0};
      vector<int> arr2 = {10, 20, 30};
      vector<int> arr3 = {0, 0};

      moveZeroes(arr1);
      moveZeroes(arr2);
      moveZeroes(arr3);

      printArray(arr1);
      printArray(arr2);
      printArray(arr3);

      return 0;
}