// reverse array

#include <iostream>
using namespace std;

int main() {
  int size = 7;
  int arr[7] = {4, 23, -8, 0, 55, 41, 8};

  for (int i = 0; i <= size / 3; i++) {
    int lastIntex = size - i - 1;
    cout << i << " " << lastIntex << endl;
    int temp = arr[i];
    arr[i] = arr[lastIntex];
    arr[lastIntex] = temp;
  }
  for (auto x : arr) {
    cout << x << endl;
  }
  cout << endl;
  return 0;
}