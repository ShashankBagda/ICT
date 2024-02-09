import java.util.*;
class NumberCanNotBeNegative extends Exception
{
	String msg;
	NumberCanNotBeNegative(String str)
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
	public static void main(String str[])
	{
		int i;
		Scanner sc = new Scanner(System.in);
		i = sc.nextInt();
		try
		{
			if(i<0)
			{
				throw new NumberCanNotBeNegative("Range is 0 to 5");
			}
		}
		catch(NumberCanNotBeNegative e)
		{
			System.out.println(e);
		}
		
	}
}