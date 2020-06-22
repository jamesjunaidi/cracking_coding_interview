// Problem 1.1, IsUnique
//
#include <iostream>
#include <string>
#include <set>

using namespace std;


int main(void) {
  string s;
  cin >> s;
  multiset<char> m;
  for (auto a : s) {
    m.insert(a);
  }
  for (auto a : m) {
    if (m.count(a) > 1) {
      cout << "Not Unique" << endl;
      return 0;
    }
  }
  cout << "Unique" << endl;
  return 0;
}
