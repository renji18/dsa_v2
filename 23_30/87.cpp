// basics of 2d array

#include <iostream>
using namespace std;

int main() {
  int arr[3][4] = {0};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Enter element at row " << i << " and column " << j << " : ";
      cin >> arr[i][j];
    }
  }

  cout << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}