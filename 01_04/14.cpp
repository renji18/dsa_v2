// pattern
// abc
// abc
// abc

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    char ch = 'a';
    for (int j = 0; j < n; j++) {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}