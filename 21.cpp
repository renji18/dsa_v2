// pattern
// 1111
//  222
//   33
//    4

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j <= n - i; j++) {
      cout << i;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}