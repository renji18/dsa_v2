// sum of two arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {1, 2, 4, 0};
  vector<int> b = {9};

  int temp = 0;
  vector<int> ans;

  int a_pointer = a.size() - 1;
  int b_pointer = b.size() - 1;
  int carry = 0;
  int power = 1;

  while (a_pointer >= 0 && b_pointer >= 0) {
    int sum = a[a_pointer] + b[b_pointer] + carry;
    carry = sum / 10;
    temp = ((sum % 10) * power) + temp;
    a_pointer--;
    b_pointer--;
    power *= 10;
  }

  while (a_pointer >= 0) {
    int sum = a[a_pointer] + carry;
    carry = sum / 10;
    temp = ((sum % 10) * power) + temp;
    a_pointer--;
    power *= 10;
  }

  while (b_pointer >= 0) {
    int sum = b[b_pointer] + carry;
    carry = sum / 10;
    temp = ((sum % 10) * power) + temp;
    b_pointer--;
    power *= 10;
  }

  while (temp) {
    ans.push_back(temp % 10);
    temp /= 10;
  }

  if (carry)
    ans.push_back(carry);

  for (int i = 0; i < ans.size() / 2; i++) {
    int temp = ans[i];
    ans.at(i) = ans.at(ans.size() - i - 1);
    ans.at(ans.size() - i - 1) = temp;
  }

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}