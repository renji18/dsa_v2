// Given a signed 32-bit integer x, return x with its digits reversed. If
// reversing x causes the value to go outside the signed 32-bit integer range
// [-231, 231 - 1], then return 0.

#include <iostream>
using namespace std;

bool inRange(unsigned x) { return (-2147483648 <= x && x <= 2147483647); }

int main() {
  unsigned n;
  cin >> n;
  if (!inRange(n)) {
    cout << "Integer not in range";
    return 0;
  }

  int newDigit = 0;
  while (n) {
    int rem = n % 10;
    newDigit = newDigit * 10 + rem;
    n /= 10;
  }
  cout << newDigit << endl;

  return 0;
}