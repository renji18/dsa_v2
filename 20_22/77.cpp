// length of string

#include <iostream>
using namespace std;

int main() {
  string name = "Aadarsh";

  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
    count++;

  cout << "Length of string is " << name.length() << " or " << count << endl;

  return 0;
}