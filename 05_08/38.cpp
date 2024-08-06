// function to return power of a number

#include <iostream>
using namespace std;

void power(int, int);

int main() {
  int a, b;
  cin >> a >> b;
  power(a, b);
  return 0;
}

void power(int a, int b) {
  int ans = 1;
  for (int i = 0; i < b; i++) {
    ans *= a;
  }
  cout << ans;
}