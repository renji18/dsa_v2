// arithmetic progression

#include <iostream>
using namespace std;

void ap(int);

int main() {
  int n;
  cin >> n;
  ap(n);
  return 0;
}

void ap(int n) { cout << 3 * n + 7; }