class P
{
	int a=10;
	P()
	{
		System.out.println("Parent - Default Constructor");
	}
	P(int a)
	{
		this.a=a;
		System.out.println("Parent - Parameterized Constructor");
	}
}
class C extends P
{
	int b=20;
	C()
	{
		System.out.println("Child - Default Constructor");
	}
	C(int b)
	{
		this();
		if(b>=10)
		{
			//super(b/2);
			this.b=b;
			System.out.println("Child - Parameterized Constructor");
		}
		
	}
	public static void main(String s[])
	{
		C c1 = new C(9);
		C c2 = new C();
	}
}