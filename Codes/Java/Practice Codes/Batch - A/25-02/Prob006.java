class Rectangle
{
	//Attributes
	int l,b;
	//Operation
	Rectangle()
	{
		l=3;
		b=4;
	}
	Rectangle(int j, int k)
	{
		l=j;
		b=k;
	}
	int areaOfRect()
	{
		return (this.l*this.b);
	}
	void findBiggerRect(Rectangle x)
	{
		if(x.areaOfRect() > this.areaOfRect())
		{
			System.out.println("Rectangle passed as an Arg is Bigger");
		}
		else
		{
			System.out.println("Calling Rectangle is Bigger");
		}
	}
	
	public static void main(String p[])
	{
		Rectangle r1 = new Rectangle();
		System.out.println(r1.areaOfRect());
		Rectangle r2 = new Rectangle(10,20);
		System.out.println(r2.areaOfRect());
		r1.findBiggerRect(r2);
		r2.findBiggerRect(r1);
		
	}
}