// again find if a number is power of 2 or not.
// a new approach. If the number set bit of a number is 1 then the number is a
// power of 2.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int numofsetbits = 0;
  while (n) {
    if (n & 1 == 1)
      numofsetbits++;
    n = n >> 1;
  }
  if (numofsetbits == 1)
    cout << "Is power of 2" << endl;
  else
    cout << "Is not power of 2" << endl;
  return 0;
}