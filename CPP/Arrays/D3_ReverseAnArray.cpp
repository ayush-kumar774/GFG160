#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int> &arr)
{
      int start = 0 ;
      int end = arr.size() - 1 ;
      while (start < end)
      {
            swap(arr[start], arr[end]);
            start++;
            end--;
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
      vector<int> arr1 = {1, 4, 3, 2, 6, 5};
      vector<int> arr2 = {10, 20, 30};
      vector<int> arr3 = {4, 5, 2};

      reverseArray(arr1);
      reverseArray(arr2);
      reverseArray(arr3);

      printArray(arr1);
      printArray(arr2);
      printArray(arr3);

      return 0;
}