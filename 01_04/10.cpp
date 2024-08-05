// pattern
// 1
// 22
// 333
// 4444

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      cout << i;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}