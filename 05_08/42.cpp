// count all set bits in given numbers

#include <iostream>
using namespace std;

int setBits(int n);

int main() {
  int a, b;
  cin >> a >> b;
  cout << setBits(a) + setBits(b);
  return 0;
}

int setBits(int n) {
  int count = 0;
  while (n) {
    if (n & 1 == 1)
      count++;
    n = n >> 1;
  }
  return count;
}