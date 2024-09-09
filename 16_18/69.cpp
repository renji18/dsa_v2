// insertion sort

#include <iostream>
using namespace std;

void sort(int *, int);
// int *sort(int *, int);
void swap(int *, int *);
void print(int *, int);

int main() {
  int arr[] = {64, 25, 12, 71, 22, 108, 5, 71};
  // int arr[] = {64, 25, 12, 71, 22, 108, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  // int *ans = sort(arr, size);
  // print(ans, size);
  sort(arr, size);
  print(arr, size);
  return 0;
}

// int *sort(int *arr, int size) {
//   int *ans = new int[size];
//   ans[0] = arr[0];
//   for (int i = 1; i < size; i++) {
//     int j = 0;
//     while (arr[i] > ans[j] && ans[j] != 0)
//       j++;
//     int k = size - 2;
//     while (k >= j) {
//       swap(ans[k], ans[k + 1]);
//       k--;
//     }
//     ans[j] = arr[i];
//     print(ans, size);
//   }
//   return ans;
// }

void sort(int *arr, int size) {
  for (int i = 1; i < size; i++) {
    int j = i - 1;
    while (arr[i] < arr[j] && j >= 0)
      j--;

    if (j == i - 1)
      continue;
    j++;

    int k = i - 1;
    while (k >= j) {
      swap(arr[k], arr[k + 1]);
      k--;
    }
  }
}

void swap(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
}

void print(int *arr, int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}