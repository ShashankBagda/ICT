interface I1
{
	void myInterface();
}
interface I2 extends I1
{
	void yourInterface();
}
class P implements I2
{
	public void myInterface(){ }
	public void yourInterface(){ }
}
class C extends P
{
	public void myInterface()
	{ 
		System.out.println("Test");
	}
	public static void main(String s[])
	{
		C c1=new C();
		c1.myInterface();
	}
}