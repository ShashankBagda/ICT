// DAA - Mid Exam 1
// Shashank Bagda - 92100133020
// Question 4 : Let the product of three variable be X. write a cpp program of time complexity O(N) (if possible) that calculates the summation of thse 
// three variables such that the summation is maximum. Note that each character must have distinct values. If I*C*T = 2001, what will be the 
// maximum value of I+C+T, such that all the characters have distinct values.


#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	// Declare the three variables
	int i, c, t;
	
	// Read the product of the three variables
	int x;
	cout << "Enter the product of three variable : ";
	cin >> x;

  	// Find the maximum value of i + c + t such that all the characters have distinct values
  	int maxSum = 0;
  	for (i = 1; i <= x; i++) 
 	{
		for (c = 1; c <= x / i; c++) 
		{
	      	t = x / (i * c);
	      	if (i != c && c != t && i != t) 
		  	{
	        	maxSum = max(maxSum, i + c + t);
	      	}
	    }
	}

  	// Print the maximum value
  	cout << "The maximum sumation of I+C+T is : "<<maxSum << endl;

  	return 0;
}
