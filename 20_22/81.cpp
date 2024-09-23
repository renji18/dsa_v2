// maximum occuring character

#include <iostream>
#include <map>
using namespace std;

int main() {
  string st = "testSamplE";

  int arr[26] = {0};

  for (auto x : st)
    if (x >= 'a' && x <= 'z')
      arr[x - 'a']++;
    else
      arr[x - 'A']++;

  int count = 0;
  char ans;

  for (int i = 0; i < 26; i++) {
    int x = arr[i];
    if (x > count || (x == count && ('a' + i) < ans)) {
      ans = 'a' + i;
      count = x;
    }
  }

  cout << ans << endl;

  return 0;
}

// int main() {
//   string st = "testsample";
//   map<char, int> m;

//   for (int i = 0; i < st.length(); i++)
//     m[st[i]]++;

//   char ans;
//   int count = 0;

//   for (auto x : m)
//     if (x.second > count || (x.second == count && x.first < ans)) {
//       ans = x.first;
//       count = x.second;
//     }

//   cout << ans << endl;

//   return 0;
// }