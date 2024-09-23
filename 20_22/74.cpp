// rotate arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  vector<int> ans(v.size());

  for (int i = 0; i < v.size(); i++) {
    ans[(i + k) % v.size()] = v[i];
  }

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}