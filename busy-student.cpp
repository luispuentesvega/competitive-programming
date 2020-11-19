#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main() {
  int startTime[] = {1, 2, 3};
  int endTime[] = {3, 2, 7};
  int queryTime = 4;
  int output = 0;
  cout << size(startTime) << endl;
  for (int i = 0; i < size(startTime); i++) {
    if (queryTime >= startTime[i] && queryTime <= endTime[i]) {
      output += 1;
    }
  }
  cout << "Output:" << output << endl;
  return 0;
}