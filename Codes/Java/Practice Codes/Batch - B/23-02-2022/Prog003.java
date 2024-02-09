class Base
{
	//Attributes
	int i;
	int j;
	//Operations
	//Constructor
	Base()
	{
		this.i=1;
		this.j=1;
	}
	Base(int p)
	{
		this.i=p;
		this.j=p;
	}
	Base(int p, int q)
	{
		this.i=p;
		this.j=q;
	}
	void multiply(Base bb1)
	{
		System.out.println("B1 * B2 : I = "+(bb1.i*this.i));
		System.out.println("B1 * B2 : J = "+(bb1.j*this.j));
	}
}
class ToRun
{
	public static void main(String s[])
	{
		Base b1 = new Base();
		Base b2 = new Base(5);
		Base b3 = new Base(10,20);
		System.out.println( "I = "+b1.i+" J = "+b1.j);
		System.out.println( "I = "+b2.i+" J = "+b2.j);
		System.out.println( "I = "+b3.i+" J = "+b3.j);
		b2.multiply(b3);
		b3.multiply(b2);
	}
}