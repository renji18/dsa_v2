// check rotated and sorted

#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int>, bool);

int main() {
  vector<int> v = {6, 10, 6};

  int first = v[0];
  int last = v[v.size() - 1];

  bool answer;

  if (first < last)
    answer = checkSorted(v, false);
  else
    answer = checkSorted(v, true);

  answer ? cout << "true" << endl : cout << "false" << endl;

  return 0;
}

bool checkSorted(vector<int> v, bool possibleRotation) {
  int size = v.size();

  int rotatedAt = -1;
  int numOfRotations = 0;

  for (int i = 0; i < size - 1; i++) {
    if (v[i] > v[i + 1]) {
      if (possibleRotation) {
        rotatedAt = i;
        numOfRotations++;
        if (numOfRotations > 1) {
          return false;
        }
      } else {
        return false;
      }
    }
  }

  return true;
}