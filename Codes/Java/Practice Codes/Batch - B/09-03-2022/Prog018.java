interface GrandMother
{
	String name="ABC";
}
class Father
{
	void payFees()
	{
		
	}
}
interface Mother
{
	void doStudy();
}
class Son extends Father implements Mother, GrandMother
{
	void payFees()
	{
		System.out.println("Fees Paid");
	}
	public void doStudy()
	{
		System.out.println("BTech ICT");
	}
	public static void main(String s[])
	{
		Son s1 = new Son();
		s1.doStudy();
		s1.payFees();
		System.out.println(s1.name);
	}
}
