class MyProg
{
	public static void main(String s[])
	{
		int myAge=10;
		if(myAge>18)
		{
			System.out.print(">18");
		}
		else
		{
			System.out.print("<18");
		}
		
	}
}
class Test
{
	void printNm()
	{
		System.out.println("Test");
	}
	public static void main(String s[])
	{
		
		Test t1 = new Test();
		t1.printNm();
		
	}
}