class A
{
	int i=10;  // object level
	static int j = 20; //class level
	private static void printName()
	{
		System.out.println("JAVA");
	}
	public void printNameAndCode()
	{
		System.out.println("JAVA-01CT0105");
	}
	public static void main(String s[])
	{
		//System.out.println(" using class : - "+A.i);
		A a1 = new A(); // A - class  A() - Constructor
		System.out.println(" using object : - "+a1.i);
		printName();
		a1.printNameAndCode();
	}
}

class B
{
	public static void main(String s[])
	{
		A a1 = new A(); // A - class  A() - Constructor
		System.out.println(" using object : - "+a1.i);
		A.printName();
	}
}