interface GrandMother
{
	String name="ABCD";
	void doMarry();
}
interface Mother extends GrandMother
{
	int bDate=220304;
	void doStudy();
}
class Son implements Mother
{
	public void doMarry()
	{
		
	}
	public void doStudy()
	{
		System.out.println("ICT");
	}
	public static void main(String s[])
	{
		Son s1 = new Son();
		s1.doStudy();
		System.out.println(s1.bDate);
		System.out.println(Mother.bDate);
		//Mother.bDate=230304;
		System.out.println(Mother.bDate);
		System.out.println(s1.name);
	}
}
/*
Mother
GrandMother
Father
GrandFather

class Son extends Father (Class->Class)
class Son implements Mother (Interface->Class)
interface Mother extends GrandMother (Interface->Interface)

class Son extends Father implements Mother
*/