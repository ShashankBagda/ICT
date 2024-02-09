import java.io.*;
class NumberCanNotBeZero extends Exception
{
	String msg;
	NumberCanNotBeZero(String str)
	{
		super(str);
		this.msg = str;
	}
	public String toString()
	{
		return this.msg;
	}
}
class Test
{
	int v1, v2;
	Test(int a, int b)
	{
		this.v1=a;
		this.v2=b;
	}
	int divide() throws NumberCanNotBeZero
	{	
		if(this.v2<0)
			throw new NumberCanNotBeZero("v2 cannot be Zero");
		return (this.v1/this.v2);
	}
	public static void main(String str[]) throws NumberCanNotBeZero
	{
		Test t = new Test(40,0);
		System.out.println(t.divide());
		/*
		try
		{
			System.out.println(t.divide());
		}
		catch(NumberCanNotBeZero n)
		{
			System.out.println(n);
		}
		*/
	}
}

class RunClass
{
	public static void main(String s[])
	{
		Test.main(s);
	}
}