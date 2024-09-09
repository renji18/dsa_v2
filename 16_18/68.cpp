// bubble sort

#include <iostream>
using namespace std;

void sort(int *, int);
void swap(int *, int *);
void print(int *, int);

int main() {
  int arr[] = {64, 25, 12, 71, 22, 108, 5, 71};
  int size = sizeof(arr) / sizeof(arr[0]);

  sort(arr, size);
  print(arr, size);
  return 0;
}

void sort(int *arr, int size) {
  void swap(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
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