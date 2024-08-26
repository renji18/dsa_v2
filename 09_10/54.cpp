// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your
// task is to return the list of all pairs of elements such that each sum of
// elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals
// to the second value.

// Return the list of pairs sorted in non-decreasing order of their first value.
// In case if two pairs have the same first value, the pair with a smaller
// second value should come first.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// BRUTE FORCE
int main() {
  int arr[] = {2, -3, 3, 3, -2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 0;

  vector<vector<int>> ans;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == key) {
        vector<int> foo = {min(arr[i], arr[j]), max(arr[i], arr[j])};
        ans.push_back(foo);
      }
    }
  }

  sort(ans.begin(), ans.end());

  for (int i = 0; i < ans.size(); i++) {
    for (auto x : ans[i]) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}