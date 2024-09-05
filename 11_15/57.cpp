// binary search

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  int key = 1;

  int size = sizeof(arr) / sizeof(arr[0]);

  int start = 0;
  int end = size - 1;

  if (arr[start] == key) {
    cout << "Found key " << key << endl;
    return 0;
  }

  if (arr[end] == key) {
    cout << "Found key " << key << endl;
    return 0;
  }

  while (start <= end) {
    int mid = start + ((end - start) / 2);
    if (arr[mid] == key) {
      cout << "Found key " << key << endl;
      return 0;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    }
  }
  cout << "Key not found" << endl;
  return 0;
}