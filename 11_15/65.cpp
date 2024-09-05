// given an array of integers, where arr[i] represents the number of pages in
// i-th book. There are m number of students and the task is to allocate all the
// books to the students. allocate book in such way that
// 1. each student gets atleast 1 book.
// 2. each book should be allocated to a student.
// 3. book allocation should be in a contiguous manner.

// You have to allocate the book to m students such that the maximum number of
// pages assigned to a student is minimum.

#include <iostream>
using namespace std;

bool isPossibleSoln(int *, int, int, int);

int main() {
  int arr[] = {4, 2, 1, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  int students = 2;

  int start = arr[0];
  int end = 0;
  for (auto x : arr)
    end += x;

  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    // cout << "start " << start << " mid " << mid << " end " << end << endl;

    if (isPossibleSoln(arr, size, students, mid)) {
      ans = mid;
      end = mid - 1;
    } else
      start = mid + 1;
  }

  cout << ans << endl;
  return 0;
}

bool isPossibleSoln(int *arr, int size, int students, int mid) {
  int pA = 0;
  int sA = 1;

  for (int i = 0; i < size; i++) {
    if (pA + arr[i] <= mid) {
      pA += arr[i];
    } else {
      sA++;
      if (sA > students || arr[i] > mid)
        return false;
      pA = arr[i];
    }
  }
  return true;
}