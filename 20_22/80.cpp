// reverse words

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> ch = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ',
                     'i', 's', ' ', 'b', 'l', 'u', 'e'};

  int ch_pointer = 0;
  int size = ch.size();

  while (ch_pointer < size) {
    int start = ch_pointer;
    int map = start;

    while (map < size && ch[map] != ' ')
      map++;
    map--;

    while (start < map)
      swap(ch[start++], ch[map--]);

    ch_pointer = map + 2;
  }

  int start = 0;
  int end = size - 1;
  while (start < end)
    swap(ch[start++], ch[end--]);

  for (auto x : ch)
    cout << x << " ";
  cout << endl;
  return 0;
}