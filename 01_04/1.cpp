// ascii question
// check if the character is an uppercase character, lowercase character, number or something else

#include <iostream>
using namespace std;

int main() {
  char input;
  cin >> input;
  int test = int(input);
  if (test >= 65 && test <= 90) {
    cout << "This is uppercase" << endl;
  } else if (test >= 97 && test <= 122) {
    cout << "This is lowercase" << endl;
  } else if (test >= 48 && test <= 57) {
    cout << "This is number" << endl;
  } else {
    cout << "Not in range" << endl;
  }
  return 0;
}