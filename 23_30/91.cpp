// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print
// the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom,
// next column bottom to top, and so on.

// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].

#include <iostream>
using namespace std;

int main() {
  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  bool rowUp = false;
  bool rowDown = true;

  int row = 0;
  int col = 0;

  while (row < 3 && col < 4) {
    if (rowUp) {
      cout << arr[row][col] << " ";
      row--;
      if (row == 0) {
        cout << arr[row][col] << " ";
        col++;
        rowDown = true;
        rowUp = false;
      }
    } else if (rowDown) {
      cout << arr[row][col] << " ";
      row++;
      if (row == 3) {
        row--;
        col++;
        rowDown = false;
        rowUp = true;
      }
    }
  }

  return 0;
}

// int main() {
//   int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

//   for (int col = 0; col < 4; col++) {
//     if (col & 1) {
//       for (int row = 3 - 1; row >= 0; row--) {
//         cout << arr[row][col] << " ";
//       }
//     } else {
//       for (int row = 0; row < 3; row++) {
//         cout << arr[row][col] << " ";
//       }
//     }
//   }

//   return 0;
// }