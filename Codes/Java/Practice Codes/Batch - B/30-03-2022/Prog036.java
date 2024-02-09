class Rect
{
	int l,b;
	Rect(int a, int b)
	{
		this.l=a;
		this.b=b;
	}
	Rect(Rect r)
	{
		this.l=r.l;
		this.b=0;
	}
	public String toString()
	{
		return "L = "+this.l+" B = "+this.b;
	}
}
class Test
{
	public static void main(String str[])
	{
		Rect r1 = new Rect(10,20);
		Rect r2 = new Rect(r1);
		System.out.println(r1);
		System.out.println(r2);
	}
}