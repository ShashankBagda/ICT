// DAA - Mid Exam 1
// Shashank Bagda - 92100133020
// Question 1 : Write a cpp program to check the validity of a password using greedy approach

#include <iostream>
#include <string>

using namespace std;

bool Validation(string password)
{
	bool length = false, hasUpper = false, hasLower = false, hasNumber = false, hasSpecial = false;
	
	// Validation of length of password
	if ( password.length() > 6 && password.length() < 16) 
	{
		length = true;
	}
	
	// Check for at least one uppercase letter, one lowercase letter, one integer and special character
	
	for (int i = 0 ; i < password.length() ; i++) 
	{
		if(isupper(password[i]) && islower(password[i]) && isdigit(password[i]) && (password[i]) == '$' || password[i] == '#' || password[i] == '@')
		{
			hasUpper = true;
			hasLower = true;
			hasNumber = true;
			hasSpecial = true;
			
			if(length == true)
			{
				return true;
				break;
			}
		}
	}
}

int main() 
{	
	string password;
	cout << "Enter a password: ";
	cin >> password;
	
	if(Validation(password))
	{
		cout<<"Valid password"<<endl;
	}
	else
	{
		cout<<"Invalid password"<<endl;
	}
	
	return 0;
}
