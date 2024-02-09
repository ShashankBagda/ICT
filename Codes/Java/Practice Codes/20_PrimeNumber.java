import java.util.*;

class Prime
{
	public static void main(String s[])
	{
	System.out.println("Enter Value : ");
	Scanner sc = new Scanner(System.in);
	int number = sc.nextInt();
	System.out.println("Entered Values are Prime Number");
	int no,i=2;

	for(no=0;no<=number;no++)
	{
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			{
				break; 
			}	
		}
		if(no==i)
		{
			System.out.print(no+" ");
		}
	}
	}
}