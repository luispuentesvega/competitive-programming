#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main() {
  int n = 4421;
  string strNum = to_string(n);

  int multiply = 1;
  int sum = 0;
  for (int i = 0; i < strNum.size(); i++) {
    stringstream str;
    str << strNum[i];
    int x;
    str >> x;
    multiply *= x;
    sum += x;
  }

  return (multiply - sum);
}