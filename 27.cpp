// first n fibonacci series

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = 0;
  int b = 1;
  for (int i = 0; i < n; i++) {
    cout << a << " ";
    int c = a + b;
    a = b;
    b = c;
  }
  cout<<endl;
  return 0;
}