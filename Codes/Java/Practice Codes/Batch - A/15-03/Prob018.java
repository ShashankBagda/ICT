class DemoFunction
{
	int addition(int a, int b)
	{
		return (a+b);
	}
	void doSum(int a)
	{
		int total=0;
		while(a>0)
		{
			total+=a;
			a--;
		}
		System.out.println("Total = "+total);
	}
	
	int factorial(int i)
	{
		if(i==1)
		{
			return 1;
		}
		return i*factorial(i-1);
	}
	public static void main(String s[])
	{
		System.out.println(new DemoFunction().addition(3,4));
		new DemoFunction().doSum(5);
		System.out.println(new DemoFunction().factorial(4));
	}
}