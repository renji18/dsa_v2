// convert decimal to binary

// // // USING STL DEQUE
// #include <deque>
// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   deque<int> myDeque;
//   while (n) {
//     myDeque.push_front(n % 2);
//     n /= 2;
//   }
//   for (auto i : myDeque) {
//     cout << i;
//   }
//   cout << endl;
//   return 0;
// }

// // // USING DIVIDE AND REMAINDER BY 2 WITHOUT STL.
// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   string ans = "";
//   while (n) {
//     ans += to_string(n % 2);
//     n /= 2;
//   }
//   for (int i = ans.length() - 1; i >= 0; i--) {
//     cout << ans[i];
//   }
//   cout << endl;
//   return 0;
// }

// // // USING & AND >>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int binary = 0;
  int count = 1;

  while (n != 0) {
    binary += (n & 1) * count;
    n = n >> 1;
    count *= 10;
  }

  cout << binary << endl;
  return 0;
}