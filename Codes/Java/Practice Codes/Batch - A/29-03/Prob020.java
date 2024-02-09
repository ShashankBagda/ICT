//Exception Handling
class MyOwnException extends Exception
{
	String msg;
	MyOwnException(String str)
	{
		super(str);
		this.msg=str;
	}
	public String toString()
	{
		return "Its Mine : "+this.msg;
	}
}
class Test
{
	public static void main(String s[])
	{
		int age=5;
		try
		{
			if(age<18)
			{
				//throw new Exception("Still too young...to learn JAVA");
				throw new MyOwnException("Custom Exception Msg");
			}
		}
		catch (MyOwnException e)
		{
			System.out.println(e);
		}
	}
}
