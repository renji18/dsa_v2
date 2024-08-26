// Given an integer array nums of length n where all the integers of nums are in
// the range [1, n] and each integer appears once or twice, return an array of
// all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant
// auxiliary space, excluding the space needed to store the output

#include <iostream>
#include <vector>
using namespace std;

// USING THE RANGE AND MARKING ELEMENTS AS -ve
int main() {
  int size = 8;
  int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};

  vector<int> ans;
  for (int i = 0; i < size; i++) {
    int x = abs(arr[i]);
    if (arr[x - 1] < 0) {
      ans.push_back(x);
    } else {
      arr[x - 1] *= -1;
    }
  }

  for (int value : ans) {
    cout << value << " ";
  }

  cout << endl;
  return 0;
}