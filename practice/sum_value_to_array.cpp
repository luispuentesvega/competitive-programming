#include <assert.h>

#include <iostream>

using namespace std;

int initial[] = {1, 1, 1, 4, 5, 6};

int increaseValues(int from, int to, int x) {
  int initFrom = from - 1;
  int initTo = to - 1;

  for (int i = initFrom; i <= initTo; i++) {
    initial[i] += x;
  }

  return 0;
}

int main() {
  increaseValues(1, 5, 2);
  increaseValues(2, 3, 10);

  for (int val : initial) {
    cout << val << endl;
  }

  assert(initial[0] == 3);
  assert(initial[1] == 13);
  assert(initial[2] == 13);
  assert(initial[3] == 6);
  assert(initial[4] == 7);
  assert(initial[5] == 6);

  return 0;
}