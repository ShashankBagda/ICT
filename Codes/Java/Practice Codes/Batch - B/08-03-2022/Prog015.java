//Visibility Modifiers - Methods
class Parent
{
	void printName()
	{
		System.out.println("Parent");
	}
}
class Child extends Parent
{
	protected void printName()
	{
		System.out.println("Child");
	}
	public static void main(String s[])
	{
		Child c = new Child();
		c.printName();
	}
}
