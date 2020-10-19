#include <array>
#include <iostream>

using namespace std;

int findNumber(int nums[], int numsSize, int target) {
  int left = 0;
  int right = numsSize - 1;

  while (left <= right) {
    int mid = (left + right) / 2;

    if (nums[mid] == target) {
      return mid;
    } else if (target > nums[mid]) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int main() {
  int nums[] = {-1, 0, 3, 5, 9, 12};
  int numsSize = size(nums);
  int target = 19;

  int res = findNumber(nums, numsSize, target);

  if (res > 0) {
    cout << "The number is located in the position : " << res << endl;
  } else {
    cout << "The number is not found in the array \n";
  }

  return 0;
}