class Time
{
	int hh;
	int mm;
	Time()
	{
		this.hh=10;
		this.mm=10;
	}
	
	public String toString()
	{
		return "HH:MM = "+this.hh+":"+this.mm;
	}
	public static void main(String k[])
	{
		Time t1 = new Time();
		System.out.println(t1);
		Time t2 = new Time();
		System.out.println(t2);
	}
}