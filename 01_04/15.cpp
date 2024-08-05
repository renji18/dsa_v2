// pattern
// abc
// def
// ghi

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char ch = 'a';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ch;
      if (ch == 'z') {
        ch = 'a';
      } else {
        ch++;
      }
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}