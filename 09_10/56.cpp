// You have been given an integer array/list(ARR) of size 'N'. It only contains
// 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating
// over the array/list just once or to put it in other words, you will be
// visiting each element in the array/list just once.

#include <iostream>
using namespace std;

int main() {
  int arr[] = {0, 1, 2, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  int start = 0;
  int mid = 0;
  int end = n - 1;
  while (mid <= end) {
    if (arr[mid] == 0) {
      swap(arr[start], arr[mid]);
      start++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else if (arr[mid] == 2) {
      swap(arr[mid], arr[end]);
      end--;
    }
  }

  for (auto x : arr) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}