// Problem 1.2, Check Permutation
//
//
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
  string s, s1;
  cin >> s >> s1;
  multiset<char> a;
  multiset<char> b;
  for (auto f : s) {
    a.insert(f);
  }
  for (auto f :s1) {
    b.insert(f);
  }
  if (a == b)
    cout << "Permutations" << endl;
  else
    cout << "Not permutations" << endl;
  
  return 0;
}
