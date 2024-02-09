class Test
{
	int a;
	int b;
	
	Test()
	{
		this.a=0;
		this.b=0;
	}
	Test(int p, int q)
	{
		this.a=p;
		this.b=q;
	}
	int divide()
	{
		return this.a/this.b;
	}
	public static void main(String s[])
	{
		Test t1 = new Test(5,0);
		System.out.println("Start");
		
		try
		{
			System.out.println(s[1]);
			
		}
		catch (ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("Haaashhhh");
		}
		
		
		try
		{
			System.out.println("Divide = "+t1.divide());
		}
		catch(ArithmeticException e)
		{
			System.out.println("Dont Add value 0 in Variable B");
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		System.out.println("End");
		
	}
}