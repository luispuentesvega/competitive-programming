#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums = {1, 1, 1, 1};
  int numsSize = nums.size();
  int output = 0;

  for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] == nums[j]) {
        output = output + 1;
      }
    }
  }
  cout << output << endl;
  return output;
}