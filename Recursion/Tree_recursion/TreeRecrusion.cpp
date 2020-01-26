/*
	Tree Recrusion implementation
	Time Complexity: O(2^n)
	Space Complexity: O(N)
*/

#include <iostream>

using namespace std;

void treeRecursion(int n);

int main(int argc, char *argv[]) {
	// Call the function
	treeRecursion(3);
}

// Implementation 
void treeRecursion(int n) {
	if (n > 0) {
		cout << n << " ";
		treeRecursion(n - 1);
		treeRecursion(n - 1);
	}
}