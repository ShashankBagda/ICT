import java.io.*;
import java.util.*;
import java.io.IOException; 

class Data
{
	int userID;

	String userName;

	int mobileNos;

	int pinCode;
	String cityName;

	
	Data(int a, String b, String c, int d, int e)
	{
		this.userID = a;
		this.userName = b;
		this.cityName = c;
		this.pinCode = d;
		this.mobileNos = e;
	}

	public String toString()
	{
		return this.userID + " # " + this.userName + " # " + this.cityName + " # " + this.pinCode + " # " + this.mobileNos;
	}
	
	static String arrayToString(Data s[])
	{
		String returnString = new String(" ");
		
		for(int i=0;i<s.length;i++)
		{
			if(i==s.length-1)
			{					
				returnString+=s[i].toString();
			}
			else
			{
				returnString+=s[i].toString()+"\n";
			}
		}
		return returnString;
		
	}  

	public static void main(String args[]) throws Exception
	{
	    Scanner s = new Scanner(System.in);
	    Scanner s1 = new Scanner(System.in);
	    Scanner s2 = new Scanner(System.in);

	    File file = new File("mobileData.txt");

		System.out.println(" Welcome to userID Directory ");

			System.out.println("Enter how many Data you want : ");
		    int n = s.nextInt();
		    for(int i=0;i<n;i++)
		        {
			        System.out.print("Enter Person's Phone Number : \n");
			        int phone = s.nextInt();

			        System.out.print("Enter Person's Name: \n");
			        String name = s1.nextLine();
			                
			        System.out.print("Enter Person's City : \n");
			        String city = s2.nextLine();

			    }
	}
}