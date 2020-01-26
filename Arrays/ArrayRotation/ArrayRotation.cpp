/*
  Implementation of Array rotation by n to the left
*/

#include <iostream>

using namespace std;

int main() {
  
  // Declare an array 
  int arr[] = {1, 2, 3, 4, 5};

  // Calculate the lengths of the array
  int len = sizeof(arr)/sizeof(arr[0]);

  // Number of times an array should be rotated
  int n = 2;

  // Original Array
  cout << "Original Sequence: ";
  for(int i = 0; i < len; i++) {
    cout << arr[i] << "  ";
  }


  // Rotate the array algorithm
  for (int i = 0; i < n; i++) {
      int j;
      int first;

      // Store the 1st element of the array
      first = arr[0];

      // inner loop
      for (j = 0; j < len-1; j++) {
        arr[j] = arr[j+1];
      }

      // First element of the array will be added at the end
      arr[j] = first;
  }


  // Display the array after the roration
  cout << "Rotation Result: ";
  for (int i = 0; i < len; i++) {
    cout << arr[i] << "  ";
  }



}