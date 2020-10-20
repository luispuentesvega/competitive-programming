#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
  int highestNumber = 0;
  // Getting the hightest number of candies for a child
  for (int numberOfCandies : candies) {
    if (numberOfCandies > highestNumber) {
      highestNumber = numberOfCandies;
    }
  }
  vector<bool> res;
  // Adding to each child the extra candies and compare with the highest number
  // of candies
  for (int numberOfCandies : candies) {
    int newNumberOfCandies = numberOfCandies + extraCandies;
    if (newNumberOfCandies >= highestNumber) {
      res.push_back(true);
    } else {
      res.push_back(false);
    }
  }
  return res;
}

int main() {
  vector<int> candies = {2, 3, 5, 1, 3};
  int extraCandies = 3;
  vector<bool> res;
  // cout << extraCandies;
  res = kidsWithCandies(candies, extraCandies);
  return 0;
}
