// DAA - Mid Exam 1
// Shashank Bagda - 92100133020
// Question 2 : Write a cpp program to search for the character which is repeated odd number of times and display it

#include <iostream>
#include <string>

using namespace std;

int main() 
{
  	// Create a string to search
  	string str = "HELLWORLD";

  	// Create an array to store the character counts
  	int charCounts[256] = {0};

 	 // Iterate over the string and count the characters
  	for (int i = 0; i < str.length(); i++) 
  	{
  		char c = str[i];
    	charCounts[i]++;
  	}

 	 // Find the character that is repeated an odd number of times
  	char oddChar;
  	for (int i = 0; i < 256; i++) 
	{
    	if (charCounts[i] % 2 == 1) 
		{
      	oddChar = (char)i;
      	break;
    	}
  	}

  	// Print the character
  	cout << oddChar << endl;

  	return 0;
}
