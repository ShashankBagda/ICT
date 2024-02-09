class Prob005
{
	//Attribute
	int i;
	//Constructor
	Prob005()
	{
		i=5;
	}
	Prob005(int k)
	{
		i=k;
	}
	//Operations
	int sum()
	{
		return i;
	}
	int sum(int a)
	{
		return i+a;
	}
	public static void main(String s[])
	{
		Prob005 p = new Prob005();
		System.out.println(p.sum());
		System.out.println(p.sum(10));
		Prob005 p1 = new Prob005(20);
		System.out.println(p1.sum());
		System.out.println(p1.sum(10));
	}
}