#include <bits/stdc++.h>

using namespace std;

int main() {
  string J = "aA";
  string S = "aAAbbbb";
  int output = 0;
  for (int i = 0; i < S.size(); i++) {
    char jewel = S[i];
    for (int j = 0; j <= J.size(); j++) {
      char stone = J[j];
      if (jewel == stone) {
        output += 1;
      }
    }
  }
  cout << "The number of jewels are " << output << endl;
  return 0;
}