// Given an array of integers nums, calculate the pivot index of this array.

// The pivot index is the index where the sum of all the numbers strictly to the
// left of the index is equal to the sum of all the numbers strictly to the
// index's right.

// If the index is on the left edge of the array, then the left sum is 0 because
// there are no elements to the left. This also applies to the right edge of the
// array.

// Return the leftmost pivot index. If no such index exists, return -1.

// https://leetcode.com/problems/find-pivot-index/description/

#include <iostream>
using namespace std;

int main() {
  int arr[] = {5, 7, 2, 6, 3, 2, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++) {
    int before = 0;
    int after = 0;
    for (int j = 0; j < i; j++)
      before += arr[j];
    for (int j = i + 1; j < size; j++)
      after += arr[j];

    if (before == after) {
      cout << "Pivot is: " << i << endl;
      return 0;
    }
  }

  cout << "No Pivot found" << endl;

  return 0;
}