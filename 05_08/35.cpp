// binary to decimal
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int count = 0;
  while (n) {
    ans += n % 10 * pow(2, count);
    n /= 10;
    count++;
  }
  cout << ans << endl;
  return 0;
}