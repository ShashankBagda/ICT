//Abstract Class 
abstract class T1 
{
	T1()
	{
		System.out.println("Parent Class Constructor");
	}
	void printName(){
		System.out.println("Parent Class");
	}
}
class T2 extends T1 //Inheritance
{
	T2()
	{
		System.out.println("Child Class Constructor");
	}
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