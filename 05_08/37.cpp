// for any given amount, find how many Rs.100 notes, Rs.30 notes, Rs.20 notes or
// Rs.1 notes are required.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int hundred = 0;
  int thirty = 0;
  int twenty = 0;
  hundred = n / 100;
  n = n % 100;
  thirty = n / 30;
  n = n % 30;
  twenty = n / 20;
  n = n % 20;

  cout << "We need " << hundred << " Rs.100 notes, " << thirty
       << " Rs.30 notes, " << twenty << " Rs.20 notes and " << n
       << " Rs.1 notes." << endl;
  return 0;
}