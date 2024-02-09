/*
Lab Experiment - 02

B) Write a java program to display the employee details using Scanner class.

Shashank Bagda
*/

import java.util.*;

class Palindrome
{
	public static void main(String[]args)
	{
		String first=new String();
		String second=new String();
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the string ");
		
		first=sc.nextLine();
		
		for(int i=first.length()-1;i>=0;i--)
		{
			second=second+first.charAt(i);
		}
		
		if(first.equalsIgnoreCase(second))
		{
			System.out.println("String  is Palindrome");
		}
		
		else 
		{
			System.out.println("String is not Palindrome");
		}
	}
}