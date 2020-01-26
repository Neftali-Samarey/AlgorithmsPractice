#include <iostream>

using namespace std;

void headRecursion(int n);

int main() {
	// Example of head recursion
	headRecursion(8);
}

void headRecursion(int n) {
	if (n > 0) {
		headRecursion(n - 1);
		// Call other things after returning
		cout << n << endl;
	}
}