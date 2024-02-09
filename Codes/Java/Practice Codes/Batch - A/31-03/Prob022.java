class InvalidAge extends Exception
{
	String msg;
	InvalidAge(String str)
	{
		this.msg=str;
	}
	public String toString()
	{
		return this.msg;
	}
}

class A
{
	int i;
	A(int a) throws InvalidAge
	{
		if(a<0)
		{
			throw new InvalidAge("Age Cannot be Negative");
		}
		else
		{
			this.i=a;
		}
	}
	public static void main(String s[]) //throws InvalidAge
	{
		try
		{
			A a1 = new A(-10);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		
	}
}