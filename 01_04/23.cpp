// pattern
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    // 1st triangle
    for (int j = 0; j < n - i; j++) {
      cout << j + 1;
    }

    // 2nd triangle
    for (int j = 0; j < i * 2; j++) {
      cout << "*";
    }

    // 3rd triangle
    for (int j = n - i; j > 0; j--) {
      cout << j;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}