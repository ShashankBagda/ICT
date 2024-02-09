// DAA - Mid Exam 1
// Shashank Bagda - 92100133020
// Question 6 : given an infinite array in which the first n cells contains integers in sorted order and the rest of the cells are filled 
// with some special symbol (assume @). Assume we do not know the n value. Give an algorithm that takes an integer K as input and finds 
// a position in the array containing K, if such a position exists in O(logn) time.

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Initialize the sorted array
  std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Initialize the low and high indices
  int low = 0;
  int high = arr.size() - 1;

  // Initialize the target value
  int K = 5;

  // Search for the element
  while (low <= high) {
    // Compute the mid index
    int mid = (low + high) / 2;

    // Check if the element is found
    if (arr[mid] == K) {
      // Return the mid index
      return mid;
    } else if (arr[mid] < K) {
      // Set low to mid + 1
      low = mid + 1;
    } else {
      // Set high to mid - 1
      high = mid - 1;
    }
  }

  // Return -1 if the element is not found
  return -1;
}
