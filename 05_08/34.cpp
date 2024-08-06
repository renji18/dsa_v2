// convert decimal to binary for negative number

#include <bitset>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  bitset<32> binary(n);
  cout << binary.to_string() << endl;
  return 0;
}
