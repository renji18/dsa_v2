// sum of even numbers

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0)
      ans += i;
  }
  cout << ans;
  return 0;
}