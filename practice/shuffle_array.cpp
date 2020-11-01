#include <bits/stdc++.h>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
  int numsLength = nums.size();
  int middle = (numsLength / 2) - 1;
  vector<int> res;

  for (int i = 0; i <= middle; i++) {
    res.push_back(nums[i]);
    res.push_back(nums[i + middle + 1]);
  }
  return res;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
  int n = 4;
  vector<int> res;

  res = shuffle(nums, n);

  for (int x : res) {
    cout << "res:" << x << endl;
  }

  return 0;
}