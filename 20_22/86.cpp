// Given an array of characters chars, compress it using the following
// algorithm:

// Begin with an empty string s. For each group of consecutive repeating
// characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be
// stored in the input character array chars. Note that group lengths that are
// 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the
// array.

// You must write an algorithm that uses only constant extra space.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> ch = {'a', 'a', 'a', 'b', 'b', 'a', 'a'};
  // vector<char> ch = {'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b',
  //                    'b', 'b', 'b', 'c', 'c', 'c', 'c', 'd', 'e', 'e'};

  int p = 1;
  int count = 1;

  for (int i = 1; i < ch.size(); i++) {
    if (ch[i] == ch[i - 1])
      count++;
    else {
      if (count > 1) {
        string countStr = to_string(count);
        for (auto x : countStr) {
          ch[p++] = x;
        }
      }
      ch[p++] = ch[i];
      count = 1;
    }
  }

  if (count > 1) {
    string countStr = to_string(count);
    for (auto x : countStr) {
      ch[p++] = x;
    }
  }

  cout << "Length is " << p << endl;

  return 0;
}
