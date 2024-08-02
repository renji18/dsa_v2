// The complement of an integer is the integer you get when you flip all the 0's
// to 1's and all the 1's to 0's in its binary representation.
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m = n;
  int mask = 0;
  while (m) {
    mask = (mask << 1) | 1;
    m = m >> 1;
  }

  // ~n returns reversed bits, but considering 32 bit, ~5 will give 11111...010.
  // then doing & with 1's gives 000...010, thus the answer
  cout << (~n & mask) << endl;
  return 0;
}