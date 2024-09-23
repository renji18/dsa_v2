// reverse array after m

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>);

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  int point = 2;

  print(v);

  int start = point + 1;
  int end = v.size() - 1;
  while (start <= end) {
    swap(v[start], v[end]);
    start++;
    end--;
  }

  print(v);
  return 0;
}

void print(vector<int> v) {
  for (auto x : v) {
    cout << x << " ";
  }
  cout << endl;
}