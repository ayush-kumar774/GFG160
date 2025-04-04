#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayUtils.h"
using namespace std;

void reverseArray(vector<int> &arr, int start, int end) {
      while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
      }
}

void rotateArray(vector<int> &arr, int d) {
      int n = arr.size();
      d %= n;

      reverseArray(arr, 0, d - 1);
      reverseArray(arr, d, n - 1);
      reverseArray(arr, 0, n - 1);
}


int main(){
      vector<int> arr1 = {1, 2, 3, 4, 5};
      vector<int> arr2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
      vector<int> arr3 = {7, 3, 9, 1};

      int d1 = 2;
      int d2 = 3;
      int d3 = 9;


      rotateArray(arr1, d1);
      rotateArray(arr2, d2);
      rotateArray(arr3, d3);

      printArray(arr1);
      printArray(arr2);
      printArray(arr3);

      return 0;

}