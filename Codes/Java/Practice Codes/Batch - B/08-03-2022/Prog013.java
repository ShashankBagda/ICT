//Abstract Class 
abstract class T1 
{
	T1()
	{
		System.out.println("Parent Class Constructor");
	}
	abstract void printName();
}
abstract class T2 extends T1 //Inheritance
{
	T2()
	{
		System.out.println("Child Class Constructor");
	}
	//Option - 2
	abstract void printName();
	/* Option - 1
	void printName()
	{
		System.out.println("I am ready to pay");
	}*/
	
}
class T3 extends T2
{
	T3()
	{
		System.out.println("Grandchild Class Constructor");
	}
	void printName()
	{
		System.out.println("My Son has Paid My Fahters Debt");
	}
	public static void main(String s[])
	{
		T3 t1 = new T3();
		t1.printName();
	}
}