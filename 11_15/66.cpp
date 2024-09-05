// Aggresive cows

#include <algorithm>
#include <iostream>
using namespace std;

bool isPossibleSoln(int *, int, int, int);

int main() {
  int arr[] = {1, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  int cows = 2;

  // first we sort the array.
  // Why? Because the minimum distance between any stall would be when they are
  // consecutive.
  sort(arr, arr + size);

  // the range is [1, max - min]
  int start = 1;
  int end = arr[size - 1] - arr[0];
  int ans = end;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    // cout << "start " << start << " mid " << mid << " end " << end << endl;
    if (isPossibleSoln(arr, size, cows, mid)) {
      // if a value is a possible solution, then we move ahead in the search
      // space, because we want the minimum distance to be maximum.
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  cout << ans << endl;
  return 0;
}

bool isPossibleSoln(int *arr, int size, int cows, int mid) {
  int cowsPlaced = 1;
  int lastPosition = 0;

  for (int i = 1; i < size; i++) {
    int distance = arr[i] - arr[lastPosition];
    // cout << " lastposition " << lastPosition << " distance " << distance
    //      << endl;
    if (distance >= mid) {
      cowsPlaced++;
      // cout << "cowsPlaced " << cowsPlaced << endl;
      if (cowsPlaced == cows)
        return true;
      lastPosition = i;
    }
  }

  return false;
}