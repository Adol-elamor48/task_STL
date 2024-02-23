#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
  unordered_map<char, char> mappings = {{')', '('}, {']', '['}, {'}', '{'}};
  stack<char> opening;

  for (char c : s) {
    if (mappings.count(c)) {

      if (opening.empty() || opening.top() != mappings[c]) {
        return false;
      }
      opening.pop();
    } else {

      opening.push(c);
    }
  }

  return opening.empty();
}

int main() {
  string str1 = "()";
  string str2 = "()[]{}";
  string str3 = "([)]";
  string str4 = "(";
  string str5 = ")";

  cout << str1 << ": " << isValid(str1) << endl;
  cout << str2 << ": " << isValid(str2) << endl;
  cout << str3 << ": " << isValid(str3) << endl;
  cout << str4 << ": " << isValid(str4) << endl;
  cout << str5 << ": " << isValid(str5) << endl;

  return 0;
}
