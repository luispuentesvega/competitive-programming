#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
  vector<int> res;
  int sum = 0;
  for (int num : nums) {
    sum += num;
    res.push_back(sum);
  }
  return res;
}

int main() {
  vector<int> input = {1, 2, 3, 4};

  vector<int> res = runningSum(input);

  for (int num : res) {
    cout << num << endl;
  }

  return 0;
}