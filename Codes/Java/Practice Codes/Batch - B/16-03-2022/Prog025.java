class Time
{
	int hour;
	int min;
	int sec;
	
	Time(int h, int m, int s)
	{
		this.hour = h;
		this.min = m;
		this.sec = s;
	}
	public String toString()
	{
		return "HH:MM:SS = "+this.hour+":"+this.min+":"+this.sec;
	}
	public static void main(String st[])
	{
		Time t1 = new Time(1,2,3);
		System.out.println(t1);
		Time t2 = new Time(1,2,3);
		System.out.println(t2);
	}
}