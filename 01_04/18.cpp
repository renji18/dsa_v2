// pattern
// a
// bc
// def
// ghij

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char ch = 'a';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}