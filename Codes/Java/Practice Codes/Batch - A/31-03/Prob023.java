class Rect
{
	int l, b;
	Rect()
	{
		this.l=0;
		this.b=0;
	}
	Rect(int a, int c)
	{
		this.l=a;
		this.b=c;
	}
	int area()
	{
		return (this.l*this.b);
	}
	Rect findBigger(Rect r)
	{
		if(this.area() > r.area())
		{
			return this;
		}
		else
		{
			return r;
		}
	}
	Rect addRect(Rect r)
	{
		return new Rect(this.l+r.l,this.b+r.b);
	}
	public String toString()
	{
		return "L = "+this.l+" B = "+this.b;
	}
	public static void main(String str[])
	{
		Rect r1 = new Rect(10,20);
		Rect r2 = new Rect(10,19);
		Rect r3 = r1.findBigger(r2);
		System.out.println(r3);
		Rect r4 = r1.addRect(r2);
		System.out.println(r4);
	}
}