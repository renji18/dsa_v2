// pivot variation.
// in a sorted rotated array, find the pivot element, that is, the element which
// would be at index 0, had the array not been rotated

#include <iostream>
using namespace std;

int main() {
  int arr[] = {8, 10, 17, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  int start = 0;
  int end = size - 1;

  while (start < end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] >= arr[0])
      start = mid + 1;
    else
      end = mid;
  }
  cout << "Pivot element is at index " << start << endl;

  return 0;
}