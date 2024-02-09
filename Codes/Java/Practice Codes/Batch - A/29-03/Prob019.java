//Exception Handling
class Test
{
	public static void main(String s[])
	{
		int a=10;
		int b=12;
		System.out.println("Start");
		//System.out.println(a/b);
		try
		{
			System.out.println(s[1]);
			try
			{
				System.out.println(a/b);
			}
			catch(ArithmeticException e)
			{
				System.out.println("b should not be zero");
				System.out.println(e);
			}
			
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("Plz pass some arguments");
			System.out.println(e);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("Outer Block");
		}
		System.out.println("End");
	}
}
