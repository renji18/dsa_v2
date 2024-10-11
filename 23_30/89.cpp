// row-wise sum problem

#include <iostream>
using namespace std;

int main() {
  int arr[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  for (int row = 0; row < 4; row++) {
    int rowSum = 0;
    for (int column = 0; column < 4; column++) {
      rowSum += arr[row][column];
    }
    cout << "Row Sum = " << rowSum << endl;
  }

  return 0;
}