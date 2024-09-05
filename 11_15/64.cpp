// You are given a positive integer ‘n’.

// Your task is to find and return its square root. If ‘n’ is not a perfect
// square, then return the floor value of sqrt(n).

// Example:
// Input: ‘n’ = 7

// Output: 2

// Explanation:
// The square root of the number 7 lies between 2 and 3, so the floor value
// is 2.

#include <iostream>
using namespace std;

int sqrtInt(int);
double sqrtDouble(int, int);

int main() {
  int n = 37;

  if (n == 1) {
    cout << "Root is " << 1 << endl;
    return 0;
  }

  int tempSol = sqrtInt(n);

  double ans = sqrtDouble(tempSol, n);

  cout << "Root is " << ans << endl;

  return 0;
}

int sqrtInt(int n) {
  int start = 0;
  int end = n / 2;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (mid * mid == n) {
      return mid;
    } else if (mid * mid < n)
      start = mid + 1;
    else
      end = mid - 1;
  }

  return start - 1;
}

double sqrtDouble(int sol, int n) {
  double ans = sol;
  double factor = 10;
  for (int i = 0; i < 8; i++) {
    int start = 0;
    int end = 9;

    while (start < end) {
      int mid = start + (end - start) / 2;
      double temp = ans + double(mid) / factor;

      if (temp * temp == double(n))
        return temp;
      else if (temp * temp < double(n))
        start = mid + 1;
      else
        end = mid - 1;
    }

    ans = ans + double(start == 0 ? 0 : start - 1) / factor;
    factor *= 10;
  }

  return ans;
}