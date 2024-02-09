class Test
{
	int val1;
	int val2;
	
	void setVal(int a, int b)
	{
		this.val1 = a;
		this.val2 = b;
	}
	
	
}
class Main
{
	static void printVal(Test t1)
	{
		System.out.println(t1.val1 + " " + t1.val2);
	}
	public static void main(String str[])
	{
		Test t = new Test();
		t.setVal(10,20);
		Main.printVal(t);
	}
}