// largest row-wise sum

#include <iostream>
using namespace std;

int main() {
  int arr[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {13, 14, 15, 16}, {9, 10, 11, 12}};

  int maxSum = 0;
  int maxRow = -1;

  for (int row = 0; row < 4; row++) {
    int rowSum = 0;
    for (int column = 0; column < 4; column++) {
      rowSum += arr[row][column];
    }
    if (rowSum > maxSum) {
      maxSum = rowSum;
      maxRow = row;
    }
  }

  cout << "Max sum is " << maxSum << " and max row is " << maxRow + 1 << endl;

  return 0;
}