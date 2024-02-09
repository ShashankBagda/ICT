class Test
{
	static int k=10;
	int p=20;
}
class B
{
	public static void main(String s2[])
	{
		System.out.println(Test.k);
		Test t1 = new Test();
		System.out.println(t1.p);
	}
}