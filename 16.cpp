// pattern
// abc
// bcd
// cde

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char ch = 'a';

  for (int i = 0; i < n; i++) {
    char inLoop = ch;
    for (int j = 0; j < n; j++) {
      cout << inLoop;
      inLoop++;
    }
    ch++;
    cout << endl;
  }
  cout << endl;
  return 0;
}