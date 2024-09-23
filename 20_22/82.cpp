// replace spaces

#include <iostream>
using namespace std;

int main() {
  string st = "The Sky Is Blue";

  string temp = "";
  for (auto x : st) {
    if (x == ' ') {
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    } else
      temp.push_back(x);
  }

  st = temp;
  cout << st << endl;
  return 0;
}