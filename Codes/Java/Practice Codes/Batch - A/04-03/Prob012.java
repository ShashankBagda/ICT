interface I1
{
	public void test(); //abstract, public 
}
class P
{
	protected void myTest(){}
}
class C extends P implements I1
{
	protected void myTest(){}
	public void test()
	{
		
	}
	public static void main(String s[])
	{
		C c1 = new C();
	}
}

/*
Private
Default
Protected
Public
*/