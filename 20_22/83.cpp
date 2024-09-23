// Given two strings s and part, perform the following operation on s until all
// occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.

#include <iostream>
using namespace std;

int main() {
  string st =
      "kpygkivtlqoockpygkivtlqoocssnextkqzjpycbylkaondsskpygkpygkivtlqoocssnext"
      "kqzjpkpygkivtlqoocssnextkqzjpycbylkaondsycbylkaondskivtlqoocssnextkqzjpy"
      "cbylkaondssnextkqzjpycbylkaondshijzgaovndkjiiuwjtcpdpbkrfsi";
  string part = "kpygkivtlqoocssnextkqzjpycbylkaonds";

  while (st.length() != 0 && st.find(part) < st.length()) {
    st.erase(st.find(part), part.length());
  }

  cout << st << endl;

  return 0;
}