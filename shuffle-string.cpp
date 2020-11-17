#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "aiohn";
  string output;
  vector<int> indices = {3, 1, 4, 2, 0};

  char array[s.size()];

  for (int i = 0; i < s.size(); i++) {
    int currentNum = indices[i];
    array[currentNum] = s[i];
  }

  for (char str : array) {
    output += str;
  }
  cout << output << "\n";

  return 0;
}