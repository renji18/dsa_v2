// You are given an n x n 2D arr representing an image, rotate the image by
// 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the
// input 2D arr directly. DO NOT allocate another 2D arr and do the
// rotation.

// Input: arr = {{1,2,3},{4,5,6},{7,8,9}}
// Output: {{7,4,1},{8,5,2},{9,6,3}}

// Input: arr = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}
// Output: {{15,13,2,5},{14,3,4,1},{12,6,8,9},{16,7,10,11}}

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> arr, int size);

int main() {
  vector<vector<int>> arr = {{1, 1, 1, 1, 1, 1}, {2, 2, 2, 2, 2, 2},
                             {3, 3, 3, 3, 3, 3}, {4, 4, 4, 4, 4, 4},
                             {5, 5, 5, 5, 5, 5}, {6, 6, 6, 6, 6, 6}};

  int n = arr.size();
  print(arr, n);

  for (int layer = 0; layer < n / 2; layer++) {
    int first = layer;
    int last = n - 1 - layer;

    for (int i = first; i < last; i++) {
      int offset = i - first;
      int top = arr[first][i];

      arr[first][i] = arr[last - offset][first];

      arr[last - offset][first] = arr[last][last - offset];

      arr[last][last - offset] = arr[i][last];

      arr[i][last] = top;
    }
  }

  cout << endl;
  print(arr, n);

  return 0;
}

// WORKS FOR ME, BUT NOT COMPETITION ACCEPTED
// int main() {
//   vector<vector<int>> arr = {{1, 1, 1, 1, 1, 1}, {2, 2, 2, 2, 2, 2},
//                              {3, 3, 3, 3, 3, 3}, {4, 4, 4, 4, 4, 4},
//                              {5, 5, 5, 5, 5, 5}, {6, 6, 6, 6, 6, 6}};
//   int size = arr.size();
//   int LTR = 0;
//   int LTC = 0;
//   int RTR = 0;
//   int RTC = size - 1;
//   int LBR = size - 1;
//   int LBC = 0;
//   int RBR = size - 1;
//   int RBC = size - 1;
//   print(arr, size);
//   int count = size;
//   int loop = 0;
//   while (true) {
//     if (count == 1) {
//       LTR++;
//       LTC = loop + 1;
//       RTC--;
//       RTR = loop + 1;
//       RBR--;
//       RBC = size - loop - 2;
//       LBC++;
//       LBR = size - loop - 2;
//       loop++;
//       count = size - 2 * loop;
//       if (count == 0)
//         break;
//       continue;
//     }
//     int first = arr[LTR][LTC];
//     int second = arr[RTR][RTC];
//     int third = arr[RBR][RBC];
//     int forth = arr[LBR][LBC];
//     arr[LTR][LTC] = forth;
//     arr[RTR][RTC] = first;
//     arr[RBR][RBC] = second;
//     arr[LBR][LBC] = third;
//     LTC++;
//     RTR++;
//     RBC--;
//     LBR--;
//     count--;
//   }
//   cout << endl;
//   print(arr, size);
//   return 0;
// }

void print(vector<vector<int>> arr, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}