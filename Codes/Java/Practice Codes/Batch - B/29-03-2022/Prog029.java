class INR
{
	int inr;
	INR()
	{
		this.inr = 0;
	}
	INR(int r)
	{
		this.inr = r;
	}
	USD inrToUsd()
	{
		return new USD(this.inr/70);
	}
}
class USD
{
	int usd;
	USD()
	{
		this.usd = 0;
	}
	USD(int r)
	{
		this.usd = r;
	}
	INR usdToInr()
	{
		return new INR(this.usd*70);
	}
}
class Main
{
	public static void main(String str[])
	{
		INR i1 = new INR(140);
		USD u1 = new USD(3);
		INR i2 = u1.usdToInr();
		USD u2 = i1.inrToUsd();
		
		System.out.println("INR = "+i2.inr);
		System.out.println("USD = "+u2.usd);
		
		System.out.println("USD = "+new INR(700).inrToUsd().usd);
		System.out.println("INR = "+new USD(11).usdToInr().inr);
	}
}