// pattern
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int count = 1;
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << count;
      count++;
    }
    count = i;
    while (count) {
      cout << count;
      count--;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}