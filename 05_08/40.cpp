// nCr

#include <iostream>
using namespace std;

int fact(int);

int main() {
  int n, r;
  cin >> n >> r;

  if (n < r) {
    cout << "n should be greater than or equal to r" << endl;
    return 0;
  }

  cout << fact(n) / (fact(r) * fact(n - r));
  return 0;
}

int fact(int a) {
  if (a == 0)
    return 1;
  return a * fact(a - 1);
}