//Final Method cannot be overridden
class T1
{
	final void printName() //Final Method
	{
		System.out.println("Parent Class");
	}
}
class T2 extends T1 //Inheritance
{
	final int t=10;
	void printName()
	{
		System.out.println("Child Class");
	}
	public static void main(String s[])
	{
		T2 t1 = new T2();
		t1.printName();
	}
}