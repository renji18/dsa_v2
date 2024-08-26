// maximum and minimum element in an array

#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 2, 3, 4, 5, 6};
  int min = arr[0];
  int max = arr[0];
  for (auto x : arr) {
    if (x < min)
      min = x;
    if (x > max)
      max = x;
  }
  cout << min << " " << max << endl;
  return 0;
}