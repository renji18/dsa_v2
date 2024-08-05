// left and right shift

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;
  cout << "Left shift " << (a << b) << endl;
  cout << "Right shift " << (a >> b) << endl;
  return 0;
}