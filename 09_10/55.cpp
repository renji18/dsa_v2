// You are given an array/list ARR consisting of N integers. Your task is to
// find all the distinct triplets present in the array which adds up to a given
// number K.

// An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if
// there exists three indices i, j and k such that i!=j, j!=k and i!=j and
// ARR[i] + ARR[j] + ARR[k] = 'K'.

// Note:
// 1. You can return the list of values in any order. For example, if a valid
// triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet.
// Also, the ordering of different triplets can be random i.e if there are more
// than one valid triplets, you can return them in any order.
// 2. The elements in the array need not be distinct.
// 3. If no such triplet is present in the array, then return an empty list, and
// the output printed for such a test case will be "-1".

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

// TWO POINTER
int main() {

  vector<int> arr = {10, 5, 5, 5, 2};
  // vector<int> arr = {9, 5, -20, -70, 2, 1, 82, 1, 4, 8, 55, -100};
  sort(arr.begin(), arr.end());
  int n = arr.size();
  int key = 12;
  // int key = -10;

  for (int x : arr) {
    cout << x << " ";
  }
  cout << endl;

  vector<vector<int>> ans;

  for (int p = 0; p < n; p++) {
    if (p > 0 && arr[p] == arr[p - 1])
      continue;
    int q = p + 1;
    int r = n - 1;
    bool foundOnce = false;
    while (q < r) {
      int sum = arr[p] + arr[q] + arr[r];
      if (sum == key) {
        vector<int> foo = {arr[p], arr[q], arr[r]};
        ans.push_back(foo);
        r--;
      } else if (sum < key) {
        q++;
      } else if (sum > key) {
        r--;
      }
    }
  }

  set<vector<int>> uniqueSet(ans.begin(), ans.end());
  vector<vector<int>> uniqueVec(uniqueSet.begin(), uniqueSet.end());

  cout << endl << "Solutions are:" << endl;

  for (const auto &v : uniqueVec) {
    for (int num : v) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}

// // BRUTE FORCE (NOT OPTIMAL)
// int main() {
//   vector<int> arr = {1, 2, 3, 1, 2, 3};
//   int n = arr.size();
//   int key = 6;

//   vector<vector<int>> ans;

//   sort(arr.begin(), arr.end());

//   for (int i = 0; i < n; i++) {
//     if (i > 0 && arr[i] == arr[i - 1])
//       continue;
//     for (int j = i + 1; j < n; j++) {
//       if (j > i + 1 && arr[j] == arr[j - 1])
//         continue;
//       for (int k = j + 1; k < n; k++) {
//         if (k > j + 1 && arr[k] == arr[k - 1])
//           continue;
//         if (arr[i] + arr[j] + arr[k] == key) {
//           vector<int> foo = {arr[i], arr[j], arr[k]};
//           ans.push_back(foo);
//         }
//       }
//     }
//   }

//   for (const auto &v : ans) {
//     for (int num : v) {
//       cout << num << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }