// Given two strings s1 and s2, return true if s2 contains a
// permutation
//  of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of
// s2.

#include <iostream>
using namespace std;

bool checkEqual(int arr1[26], int arr2[26]) {
  for (int i = 0; i < 26; i++) {
    if (arr1[i] != arr2[i])
      return false;
  }
  return true;
}

int main() {
  string s1 = "ab";
  string s2 = "eidbaooo";

  if (s1.size() > s2.size()) {
    cout << "Permutation not possible" << endl;
    return 0;
  }

  int arr1[26] = {0};

  for (int i = 0; i < s1.size(); i++) {
    arr1[s1[i] - 'a']++;
  }

  int i = 0;
  int windowSize = s1.length();

  int arr2[26] = {0};

  // first window
  while (i < windowSize && i < s2.length()) {
    arr2[s2[i] - 'a']++;
    i++;
  }

  if (checkEqual(arr1, arr2)) {
    cout << "true" << endl;
    return 0;
  }

  // continue ahead
  while (i < s2.length()) {
    arr2[s2[i] - 'a']++;
    arr2[s2[i - windowSize] - 'a']--;

    i++;

    if (checkEqual(arr1, arr2)) {
      cout << "true" << endl;
      return 0;
    }
  }

  cout << "false" << endl;

  return 0;
}
