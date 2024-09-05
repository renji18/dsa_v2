// total number of occurence

#include <iostream>
using namespace std;

int occ(int *, int, int, int);

int main() {
  int arr[] = {0, 1, 1, 1, 1, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 1;

  cout << "Number of occurence of " << key
       << " is: " << (occ(arr, size, key, 2) - occ(arr, size, key, 1) + 1)
       << endl;

  return 0;
}

int occ(int *arr, int size, int key, int occNo) {
  int start = 0;
  int end = size - 1;
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      ans = mid;
      if (occNo == 1)
        end = mid - 1;
      else
        start = mid + 1;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return ans;
}