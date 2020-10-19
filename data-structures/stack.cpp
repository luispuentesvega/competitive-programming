#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> s;

  for (int i = 1; i <= 20; i++) {
    s.push(i);
  }

  // Printing the values of the Stack
  while (!s.empty()) {
    cout << "The value is : " << s.top() << endl;
    s.pop();
  }

  return 0;
}