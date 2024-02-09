interface I
{
	void myInterface();
}
abstract class P implements I
{
	abstract public void myInterface();
	final void test()
	{
		
	}
	abstract void test1();
}
abstract class C extends P
{
	abstract public void myInterface();
	void test1(){}
	public static void main(String s[])
	{
		C c1=new C();
	}
}