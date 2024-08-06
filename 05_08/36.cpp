// Given an integer n, return true if it is a power of two. Otherwise, return
// false. An integer n is a power of two, if there exists an integer x such that
// n == 2^x.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n != 1) {
    int rem = n % 2;
    if (rem == 1) {
      cout << "false";
      return 0;
    }
    n /= 2;
  }
  cout << "true";
  return 0;
}