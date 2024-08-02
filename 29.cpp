// Write a function that takes the binary representation of a positive integer
// and returns the number of  set bits it has (also known as the Hamming
// weight).

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int setBits = 0;
  while (n) {
    if (n & 1)
      setBits++;
    n = n >> 1;
  }
  cout << setBits << endl;
  return 0;
}