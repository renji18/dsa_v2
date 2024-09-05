// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You
// are also given an integer ‘k’.

// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence
// will be -1.
// 2. 'arr' may contain duplicate elements.

#include <iostream>
using namespace std;

int occurence(int *, int, int, int);

int main() {
  int arr[] = {0, 1, 1, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 1;

  cout << "First Occurence " << occurence(arr, size, key, 1)
       << "\nLast Occurence " << occurence(arr, size, key, 2) << endl;

  return 0;
}

int occurence(int *arr, int size, int key, int occNo) {
  int start = 0;
  int end = size - 1;
  int ans = -1;

  while (start <= end) {
    int mid = start + ((end - start) / 2);
    if (arr[mid] == key) {
      ans = mid;
      if (occNo == 1)
        end = mid - 1;
      else
        start = mid + 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return ans;
}
