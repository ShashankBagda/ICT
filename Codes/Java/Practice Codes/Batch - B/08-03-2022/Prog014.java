//Visibility Modifiers - Variable 
class Parent
{
	private int i=10;
	int j=20;
	protected int k=30;
	public int l=40;
	
	void printData()
	{
		System.out.println(this.i);
		System.out.println(this.j);
		System.out.println(this.k);
		System.out.println(this.l);
	}
}
class Child
{
	public static void main(String s[])
	{
		Parent p =new Parent();
		p.printData();
		/*
		System.out.println(p.i);
		System.out.println(p.j);
		System.out.println(p.k);
		System.out.println(p.l);*/
		
	}
}
