// Given an m x n matrix, return all elements of the matrix in spiral order.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rowLen = arr.size();
  int colLen = arr[0].size();

  int count = rowLen * colLen;
  int row = 0;
  int col = 0;

  int maxLeft = 0;
  int maxRight = colLen;
  int maxTop = 0;
  int maxBottom = rowLen;

  string direction = "right";

  while (count) {
    // cout << endl
    //      << "direction " << direction << " row " << row << " col " << col
    //      << " maxtop " << maxTop << " maxbottom " << maxBottom << " maxleft "
    //      << maxLeft << " maxright " << maxRight << " count " << count <<
    //      endl;
    if (direction == "right") {
      if (col < maxRight) {
        cout << arr[row][col++] << " ";
        count--;
      } else {
        col--;
        row++;
        direction = "bottom";
        maxRight--;
      }
    } else if (direction == "bottom") {
      if (row < maxBottom) {
        cout << arr[row++][col] << " ";
        count--;
      } else {
        row--;
        col--;
        maxBottom--;
        direction = "left";
      }
    } else if (direction == "left") {
      if (col >= maxLeft) {
        cout << arr[row][col--] << " ";
        count--;
      } else {
        col++;
        row--;
        maxLeft++;
        direction = "top";
      }
    } else if (direction == "top") {
      if (row > maxTop) {
        cout << arr[row--][col] << " ";
        count--;
      } else {
        direction = "right";
        row++;
        col++;
        maxTop++;
      }
    }
  }
  return 0;
}