// DAA - Mid Exam 1
// Shashank Bagda - 92100133020
// Question 5 : Given teo integers 'n' and 'm', find all the stepping numbers in range [n, m]. A number is called steeping number if all adjacent digits 
// have an absolute difference of 1. 321 is a stepping number while 421 s not. For example input : 10, 15 [Here value of n is 10 and m is 15] Output : 10, 12


#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is a stepping number

bool isSteppingNumber(int n) 
{
  	// Convert the number to a string
  	string s = tostring(n);

  	// Iterate over the string and check if the adjacent digits have an absolute difference of 1
  	for (int i = 1; i < s.length(); i++) 
	{
    	if (abs(s[i] - s[i - 1]) != 1) 
		{
	      	return false;
	    }
	}

  	// If all the adjacent digits have an absolute difference of 1, then the number is a stepping number
  	return true;
}

// Function to find all the stepping numbers in a range
vector<int> findSteppingNumbers(int n, int m) 
{
  	// Create a vector to store the stepping numbers
  	vector<int> steppingNumbers;

  	// Iterate over the range and add all the stepping numbers to the vector
  	for (int i = n; i <= m; i++) 
	{
    	if (isSteppingNumber(i)) 
		{
      		steppingNumbers.push_back(i);
    	}
	}

  	// Return the vector of stepping numbers
  	return steppingNumbers;
}

int main() 
{
  	// Get the input
  	int n, m;
  	cout << "Enter value of n : ";
  	cin >> n;
  	cout << "Enter value of m : ";
  	cin >> m;

  	// Find all the stepping numbers in the range
  	vector<int> steppingNumbers = findSteppingNumbers(n, m);

  	// Print the stepping numbers
  	for (int i = 0; i < steppingNumbers.size(); i++) 
  	{
		cout << steppingNumbers[i] << " ";
  	}

  	cout << endl;

  	return 0;
}
