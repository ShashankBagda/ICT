class Prob005
{
	//Initilizer Block - Object Level
	{
		System.out.println("in Object Level");
	}
	//Initilizer Block - Class Level
	static
	{
		System.out.println("in Class Level");
	}
	//Constructor
	Prob005()
	{
		System.out.println("Inside Constructor");
	}
	public static void main(String a[])
	{
		System.out.println("in Main");
		Prob005 p1 = new Prob005();
		Prob005 p2 = new Prob005();
	}
}
