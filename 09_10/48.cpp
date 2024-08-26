// swap alternate

#include <iostream>
using namespace std;

int main() {
  // int size = 8;
  // int arr[8] = {4, 23, -8, 0, 55, 41, 8, 6};
  int size = 7;
  int arr[7] = {4, 23, -8, 0, 55, 41, 8};

  for (int i = 0; i < size; i += 2) {
    if (i + 1 >= size)
      break;
    // int temp = arr[i];
    // arr[i] = arr[i + 1];
    // arr[i + 1] = temp;
    swap(arr[i], arr[i + 1]);
  }
  for (auto x : arr) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}