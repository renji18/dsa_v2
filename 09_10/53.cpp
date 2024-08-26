// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both
// these arrays are sorted in non-decreasing order. You have to find the
// intersection of these two arrays.

// Intersection of two arrays is an array that consists of all the common
// elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original
// arrays.
// 4. If there is no intersection present then return an empty array.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m[] = {1, 2, 2, 2, 3, 4};
  int n[] = {2, 2, 3, 3};

  int sizeof_m = sizeof(m) / sizeof(m[0]);
  int sizeof_n = sizeof(n) / sizeof(n[0]);

  int p = 0;
  int q = 0;

  vector<int> ans;

  while (p < sizeof_m && q < sizeof_n) {
    if (m[p] == n[q]) {
      ans.push_back(m[p]);
      p++;
      q++;
    } else if (m[p] < n[q]) {
      p++;
    } else {
      q++;
    }
  }

  for (int x : ans) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}