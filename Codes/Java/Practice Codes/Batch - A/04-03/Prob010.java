abstract class F
{
	int i=0;
	F()
	{
		System.out.println("Parent Object Created");
	}
	void testF1()
	{
		
	}
	//abstract void testF2();
}
interface M1
{
	int j=10; //static, final
	void testM1();
}
interface M2
{
	int k=20; //static, final
}
class Son extends F implements M1,M2
{
	Son()
	{
		System.out.println("Child Object Created");
	}
	/*void testF2()
	{
		
	}*/
	public static void main(String s[])
	{
		//M1.j = M1.j + 10; //Final
		//System.out.println(M1.j); // static
		//System.out.println(M2.k);
		Son s1=new Son();
		//s1.i=s1.i+20;
		//System.out.println(s1.i);
	}
}	
