// move zeroes

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>);

int main() {
  vector<int> v = {5, 0, 1, 2, 0, 3, 14, 12};

  int zero = 0;
  int nonZero = 0;

  while (zero < v.size() && nonZero < v.size()) {
    if (v[zero] != 0) {
      zero++;
      continue;
    }
    if (v[nonZero] == 0 || nonZero < zero) {
      nonZero++;
      continue;
    }
    swap(v[zero], v[nonZero]);
    zero++;
    nonZero++;
  }

  print(v);
  return 0;
}

void print(vector<int> v) {
  for (auto x : v)
    cout << x << " ";
  cout << endl;
}