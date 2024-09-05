// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You
// are also given an integer ‘k’.

// Now the array is rotated at some pivot point unknown to you.

// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index
// 3, the array will be 'arr' = [7, 8, 1, 3, 5].

// Now, your task is to find the index at which ‘k’ is present in 'arr'.

// Note :
// 1. If ‘k’ is not present in 'arr', then print -1.
// 2. There are no duplicate elements present in 'arr'.
// 3. 'arr' can be rotated only in the right direction.

#include <iostream>
using namespace std;

int pivot(int *, int);

int main() {
  int arr[] = {2, 3, 5, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 3;

  int pivotElement = 0;
  if (arr[0] < arr[size - 1]) {
    int pivotElement = pivot(arr, size);

    if (arr[pivotElement] == key) {
      cout << "Key is at index  " << pivotElement << endl;
      return 0;
    }
  }

  int start = 0, end = size - 1;

  if (pivotElement != 0) {
    if (arr[end] == key) {
      cout << "Key is at index " << end << endl;
      return 0;
    } else if (arr[end] < key) {
      end = pivotElement - 1;
    } else
      start = pivotElement + 1;
  }

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      cout << "Key is at index " << mid << endl;
      return 0;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else
      start = mid + 1;
  }

  cout << "Key not found" << endl;
  return 0;
}

int pivot(int *arr, int size) {
  int s = 0;
  int e = size - 1;

  while (s < e) {
    int m = s + (e - s) / 2;
    if (arr[m] >= arr[0])
      s = m + 1;
    else
      e = m;
  }
  return s;
}