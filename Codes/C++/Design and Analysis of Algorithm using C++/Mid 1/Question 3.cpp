// DAA - Mid Exam 1
// Shashank Bagda - 92100133020
// Question 3 : take a user defined alphanumeric string of length N. arrange the characters in the format (Uppercase, Lowercase, Numbers). 
// Write the cpp code for the same with time complexity O(N) and space complexity O(1)

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
  	// Create a string to search
  	string str;
  	cout << "Enter the string : ";
  	cin >> str;

  	// Create three empty strings to store the uppercase, lowercase, and numeric characters
  	string upper, lower, numbers;

  	// Iterate over the string and add each character to the appropriate string
  	for (int i = 0; i < str.length(); i++) 
  	{
  		char c = str[i];
    	if (isupper(c)) 
		{
      		upper += c;
    	} 
		else if (islower(c)) 
		{
      		lower += c;
    	} 
		else 
		{
      		numbers += c;
    	}
  	}

  	// Sort the three strings
  	sort(upper.begin(), upper.end());
  	sort(lower.begin(), lower.end());
  	sort(numbers.begin(), numbers.end());

  	// Concatenate the three strings and print the result
  	string result = upper + lower + numbers;
  	cout << result << endl;

  	return 0;
}
