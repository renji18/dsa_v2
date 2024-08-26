// linear search

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[5] = {3, 6, 1, 32, 2};
  for (auto x : arr) {
    if (x == n) {
      cout << n << endl;
      return 0;
    }
  }
  cout << "Not in array" << endl;
  return 0;
}