// check palindrome

#include <iostream>
using namespace std;

int main() {
  string st = "N2 i&nJA?a& jnI2n";

  for (int i = 0; i < st.length(); i++)
    if (st[i] >= 65 && st[i] <= 90)
      st[i] += 32;

  int start = 0;
  int end = st.length() - 1;

  while (start < end) {
    if ((st[start] < 48 || st[start] > 57) &&
        (st[start] < 97 || st[start] > 122)) {
      start++;
      continue;
    }
    if ((st[end] < 48 || st[end] > 57) && (st[end] < 97 || st[end] > 122)) {
      end--;
      continue;
    }
    if (st[start] != st[end]) {
      cout << "Not palindrome" << endl;
      return 0;
    }
    start++;
    end--;
  }
  cout << "Palindrome" << endl;
  return 0;
}