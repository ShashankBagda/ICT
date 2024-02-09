
class T1
{
	static final int i =10;
	final void printClassName()
	{
		System.out.println("T1");
	}
	public static void main(String s[])
	{
		//i = i+10; // Final Variable cannot be changed
		System.out.println(i);
	}
	
}
class T2 extends T1
{
	//as this method is declared Final in T1 it cannot
	// not be Overriden
	void printClassName()
	{
		System.out.println("T2");
	}
	public static void main(String s[])
	{
		T2 t = new T2();
		t.printClassName();
	}
}
final class T3
{
	int k=10;
}
class T4 extends T3
{
	public static void main(String s[])
	{
		System.out.println("From Class T4");
	}
}
