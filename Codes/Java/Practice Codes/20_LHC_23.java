/*
LHC 1
23. Write a program in Java to demonstrate multiple try block and multiple catch exception.
Shashank Bagda
*/
class Test
{
	public static void main(String s[])
	{
		int a=10;
		int b=12;
		
		try
		{
			System.out.println(s[1]);
			
			try
			{
				System.out.println(a/b);
			}
			
			catch(Exception e)
			{
				System.out.println("b should not be zero");
				System.out.println(e);
			}
		}
	}
}