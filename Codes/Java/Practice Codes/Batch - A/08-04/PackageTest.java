import myPackage.*;
class Test extends Prob027
{
	protected void printIandJ()
	{
		Prob027 p1 = new Test();
		System.out.println(super.i + p1.j);
	}
	public static void main(String s[])
	{
		Prob027 p1 = new Prob027();
		System.out.println(p1.getMyClassNo());
		new Test().printIandJ();
	}
}