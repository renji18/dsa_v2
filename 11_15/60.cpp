// You are given an integer mountain array arr of length n where the values
// increase to a peak element and then decrease.

// Return the index of the peak element.

#include <iostream>
using namespace std;

int main() {
  int arr[] = {3, 5, 3, 2, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  int start = 0;
  int end = size - 1;
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
      ans = mid;
      break;
    }
    if (mid == start) {
      if (arr[mid] > arr[mid + 1])
        ans = mid;
      else
        ans = mid + 1;
      break;
    }
    if (mid == end) {
      if (arr[mid] > arr[mid - 1])
        ans = mid;
      else
        ans = mid + 1;
      break;
    }
    if (arr[mid + 1] > arr[mid - 1]) {
      start = mid + 1;
      continue;
    }
    if (arr[mid - 1] > arr[mid + 1]) {
      end = mid - 1;
      continue;
    }
  }

  cout << "Peak is: " << ans << endl;

  return 0;
}