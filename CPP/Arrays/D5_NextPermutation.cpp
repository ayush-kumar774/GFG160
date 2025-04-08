#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayUtils.h" 
using namespace std;

void reverse(vector<int> &arr, int start, int end)
{
      while (start < end)
      {
            swap(arr[start++], arr[end--]); // use STL swap
      }
}

void nextPermutation(vector<int> &arr)
{
      int n = arr.size();
      int i = n - 2;

      while (i >= 0 && arr[i] >= arr[i + 1])
            i--;

      if (i >= 0)
      {
            int j = n - 1;
            while (arr[j] <= arr[i])
                  j--;
            swap(arr[i], arr[j]);
      }

      reverse(arr, i + 1, n - 1);
}

int main()
{
      vector<int> arr1 = {2, 4, 1, 7, 5, 0};
      vector<int> arr2 = {3, 2, 1};
      vector<int> arr3 = {3, 4, 2, 5, 1};

      nextPermutation(arr1);
      nextPermutation(arr2);
      nextPermutation(arr3);

      printArray(arr1);
      printArray(arr2);
      printArray(arr3);

      return 0;
}
