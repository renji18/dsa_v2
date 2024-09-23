// merge sorted arrays

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void moveRight(vector<int> &, int);
void print(vector<int>);
void merge(vector<int> &, vector<int>);

int main() {
  vector<int> v1 = {1, 2, 3, 9, 9, 9, 19, 29, 0, 0, 0};
  vector<int> v2 = {2, 5, 6};

  moveRight(v1, v2.size());
  merge(v1, v2);
  print(v1);

  return 0;
}

void merge(vector<int> &v1, vector<int> v2) {
  int v1_pointer = v2.size();
  int v2_pointer = 0;

  int ans_pointer = 0;
  while (v1_pointer < v1.size() && v2_pointer < v2.size()) {
    if (v1[v1_pointer] < v2[v2_pointer]) {
      v1[ans_pointer++] = v1[v1_pointer];
      v1[v1_pointer++] = 0;
    } else if (v1[v1_pointer] > v2[v2_pointer]) {
      v1[ans_pointer++] = v2[v2_pointer];
      v2[v2_pointer++] = 0;
    } else {
      v1[ans_pointer++] = v1[v1_pointer];
      v1[v1_pointer++] = 0;
      v1[ans_pointer++] = v2[v2_pointer];
      v2[v2_pointer++] = 0;
    }
  }
}

void moveRight(vector<int> &v1, int size_v2) {
  int start = v1.size() - size_v2 - 1;
  int end = v1.size() - 1;

  while (start >= 0) {
    swap(v1[start], v1[end]);
    start--;
    end--;
  }
}

void print(vector<int> v1) {
  for (auto x : v1) {
    cout << x << " ";
  }
  cout << endl;
}