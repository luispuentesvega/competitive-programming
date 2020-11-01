// CPP program to check for balanced parenthesis.
#include <bits/stdc++.h>
using namespace std;

int main() {
  string expr = "{((((()[](*)))))}";
  stack<char> s;

  for (int i = 0; i < expr.length(); i++) {
    char str = expr[i];
    if (str == '{' || str == '(' || str == '[') {
      s.push(expr[i]);
      continue;
    }

    char top = s.top();
    switch (str) {
      case '}':
        if (top == '{') {
          s.pop();
        } else {
          break;
        }
        break;
      case ')':
        if (top == '(') {
          s.pop();
        } else {
          break;
        }
        break;
      case ']':
        if (top == '[') {
          s.pop();
        } else {
          break;
        }
        break;
    }
  }

  const int isBalanced = s.empty();

  // s.push('{');
  if (isBalanced) {
    cout << "Balanced" << endl;
  } else {
    cout << "No Balanced" << endl;
  }

  return 0;
}