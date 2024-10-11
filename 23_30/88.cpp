// linear search in 2d array

#include <iostream>
using namespace std;

int main() {
  int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

  int key = 7;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (arr[i][j] == key) {
        cout << "Key " << key << " is in row " << i << " and column " << j
             << endl;
        return 0;
      }
    }
  }

  cout << "Key not found" << endl;

  return 0;
}