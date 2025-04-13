#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMissingPositive(vector<int> &arr)
{
      int maxVal = *max_element(arr.begin(), arr.end());
      if (maxVal < 1)
            return 1;

      vector<bool> present(maxVal + 1, false);

      for (int num : arr)
      {
            if (num > 0 && num <= maxVal)
            {
                  present[num] = true;
            }
      }

      for (int i = 1; i <= maxVal; ++i)
      {
            if (!present[i])
                  return i;
      }

      return maxVal + 1;
}

int missingNumber(vector<int> &arr)
{
      int n = arr.size();

      for (int i = 0; i < n; i++)
      {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i])
            {
                  swap(arr[i], arr[arr[i] - 1]);
            }
      }

      for (int i = 0; i < n; i++)
      {
            if (arr[i] != i + 1)
            {
                  return i + 1;
            }
      }

      return n + 1;
}

int main()
{
      vector<int> arr1 = {2, -3, 4, 1, 1, 7};
      vector<int> arr2 = {1, 2, 3, 4, 5};
      vector<int> arr3 = {-5, -2, -1};;

      cout << findMissingPositive(arr1) << endl;
      cout << findMissingPositive(arr2) << endl;
      cout << findMissingPositive(arr3) << endl;
      return 0;
}