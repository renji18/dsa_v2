// You are given a string s consisting of lowercase English letters. A duplicate
// removal consists of choosing two adjacent and equal letters and removing
// them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It
// can be proven that the answer is unique.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  string st = "abbaca";
  vector<char> temp;

  temp.push_back(st[0]);

  for (int i = 1; i < st.size(); i++) {
    if (!temp.empty() && temp.back() == st[i])
      temp.pop_back();
    else
      temp.push_back(st[i]);
  }

  string ans(temp.begin(), temp.end());
  cout << ans << endl;

  return 0;
}

// int main() {
//   string st = "abbaca";

//   int point = 0;
//   while (point < st.size()) {
//     if (st[point] == st[point + 1]) {
//       st.erase(point, 2);
//       point = 0;
//     } else
//       point++;
//   }

//   cout << st << endl;
//   return 0;
// }