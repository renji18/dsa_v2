// function to tell if number is even or odd

#include <iostream>
using namespace std;

void checkEven(int);

int main() {
  int n;
  cin >> n;
  checkEven(n);
  return 0;
}

void checkEven(int n) {
  if (n % 2 == 0)
    cout << "Even";
  else
    cout << "Odd";
  cout << endl;
}