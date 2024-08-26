// You have been given an integer array/list(ARR) of size N. Where N is equal to
// [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is
// present only once.
// You need to find and return that number which is unique in the array/list.

#include <iostream>
#include <unordered_map>
using namespace std;

// USING XOR METHOD
int main() {
  int size = 9;
  // int arr[7] = {2, 3, 1, 6, 3, 6, 2};
  // int arr[5] = {2, 4, 7, 2, 7};
  int arr[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};

  int ans = arr[0];
  for (int i = 1; i < size; i++) {
    ans = ans ^ arr[i];
  }

  cout << "Unique element is " << ans << endl;
  return 0;
}

// //USING HASHMAP
// int main() {
//   int size = 7;
//   int arr[7] = {2, 3, 1, 6, 3, 6, 2};
//   // int arr[5] = {2, 4, 7, 2, 7};
//   // int arr[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};

//   unordered_map<int, int> myMap;

//   for (int i = 0; i < size; i++) {
//     myMap[arr[i]]++;
//   }

//   for (auto &x : myMap) {
//     if (x.second == 1) {
//       cout << "Unique element is " << x.first << endl;
//     }
//   }

//   return 0;
// }