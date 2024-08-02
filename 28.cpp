// given an integer n, return the difference between the product of its digits
// and the sum of its digits

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int product = 1;
  int sum = 0;

  while (n) {
    int rem = n % 10;
    product *= rem;
    sum += rem;
    n /= 10;
  }
  cout << product - sum << endl;
  return 0;
}