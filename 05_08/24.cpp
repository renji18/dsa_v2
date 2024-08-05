// bitwise operations

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;

  cout << "And is " << (a & b) << endl;
  cout << "Or is " << (a | b) << endl;
  cout << "Not is " << (~a) << " " << (~b) << endl;
  cout << "Xor is " << (a ^ b) << endl;

  return 0;
}