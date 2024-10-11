// You are given an m x n integer matrix matrix with the following two
// properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the
// previous row. Given an integer target, return true if target is in matrix or
// false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int key = 20;

  int row = arr.size();
  int col = arr[0].size();

  int start = 0;
  int end = row * col - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    int element = arr[mid / col][mid % col];
    if (element == key) {
      cout << "Element at index " << mid << endl;
      return 0;
    }
    if (element < key)
      start = mid + 1;
    else
      end = mid - 1;
  }

  cout << "Element not found" << endl;

  return 0;
}