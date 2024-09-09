// selection sort

#include <iostream>
using namespace std;

void sort(int *, int);
void swap(int *, int *);
void print(int *, int);

int main() {
  int arr[] = {64, 25, 12, 11, 22};
  int size = sizeof(arr) / sizeof(arr[0]);

  sort(arr, size);
  print(arr, size);
  return 0;
}

void sort(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    int possible = i;
    for (int j = i + 1; j < size; j++)
      if (arr[j] < arr[possible])
        possible = j;
    if (possible == i)
      continue;
    swap(arr[i], arr[possible]);
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