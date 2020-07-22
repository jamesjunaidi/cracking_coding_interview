#include <iostream>
using namespace std;

int getNthFib(int n) {
  // Write your code here.
	if (n==1) {
		return 0;
	} else if (n==2) {
		return 1;
	}
	int two = 1;
	int temp = 0;
	int cur = 1; // this is n = 2;
	for (int i = 3; i < n; ++i) {
		temp = cur;
		cur = two + cur;
		two = temp;
	}
	return cur;
  return -1;
}

int main(void) {
  cout << "Test Case: Fib of 6" << endl;
  cout << getNthFib(6) << endl;
  return 0;
}
