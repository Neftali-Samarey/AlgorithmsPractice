/*
	Find max value in an array algorithm
	Time complexity: O(n) linear.
	Algorithm needs to pass every integer in order from staet to finish,
	hence linearly checking every index until it finds the largest integer.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxInt(vector<int> v);

int main(int argc, char *argv[]) {
	
	// Create a vector with some data
	vector<int> unsorted_array;
	unsorted_array.push_back(6);
	unsorted_array.push_back(3);
	unsorted_array.push_back(8);
	unsorted_array.push_back(5);
	unsorted_array.push_back(12);
	unsorted_array.push_back(1);
	
	// Call the findMaxInt function and store the result in an integer
	int max = findMaxInt(unsorted_array);
	cout << "Largest integer is " << max << endl;
}

int findMaxInt(vector<int> v) {
	
	// Sort the array first
	sort(v.begin(), v.end());
	
	// Set the max integer to be equal to the 1st index of the array first
	int maxInt = v[0];
	
	// Begin iterating over the array to try and ind the array
	for (int i = 0; i < v.size(); i++) {
		// Check if v[i] is greater than the value set initially at maxInt index 0
		if (v[i] > maxInt) {
			// If so, set maxInt to be equal to the index
			maxInt = v[i];
		}
	}
	// Once loop has ended, return the max integer back to the called, and exit the function.
	return maxInt;
}