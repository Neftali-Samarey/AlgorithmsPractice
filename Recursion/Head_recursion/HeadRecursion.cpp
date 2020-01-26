/*
	Example of Head recursion in C++
	Author: Neftali Samarey
*/

#include <iostream>

using namespace std;

// Prototype function
void headRecursion(int n);

int main() {
	// Calling recursive function in main
	headRecursion(8);
}

// Implemented method
void headRecursion(int n) {
	if (n > 0) {
		// If other statements here, this is not head recursion
		headRecursion(n - 1);
		// Call other things after returning
		cout << n << endl;
	}
}