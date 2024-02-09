class Time
{
	int hour,minute;
	Time()
	{
		hour=10;
		minute=10;
	}
	Time(int h, int m)
	{
		hour=h;
		minute=m;
	}
	int total()
	{
		return((hour*60)+minute);
	}
	void compare(Time t )
	{
		if(t.total()>this.total())
		{
			System.out.println("Time T2 is bigger");
		}
		else
		{
			System.out.println("Time T1 is bigger");
		}
	}
	public static void main(String s[])
	{
		Time t1 = new Time();
		System.out.println(t1.total());
		Time t2 = new Time(20,20);
		System.out.println(t2.total());
		t1.compare(t2);
	}
}