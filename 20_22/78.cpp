// reverse string

#include <iostream>
using namespace std;

int main() {
  char name[] = "Mittal";

  int size = 0;
  for (int i = 0; name[i] != '\0'; i++)
    size++;

  int start = 0;
  int end = size - 1;

  while (start < end) {
    char temp = name[start];
    name[start++] = name[end];
    name[end--] = temp;
  }

  cout << name << endl;

  return 0;
}