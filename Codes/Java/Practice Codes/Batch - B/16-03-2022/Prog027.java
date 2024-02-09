class GP
{
	int age;
	GP()
	{
		this.age=51;
	}
	void setAge(int i)
	{
		this.age=i;
	}
	int getAge()
	{
		return this.age;
	}
}
class P extends GP
{
	int age;
	P()
	{
		super();
		this.age=31;
	}
	int parentAge()
	{
		return super.age;
	}
	void setAge(int i)
	{
		this.age=i;
	}
	int getAge()
	{
		return this.age;
	}
}
class S extends P
{
	int age;
	S()
	{
		super();
		this.age=1;
	}
	void setAge(int i)
	{
		this.age=i;
	}
	int getAge()
	{
		return this.age;
	}
	void printFamilyData()
	{
		System.out.println("Son : "+this.age);
		System.out.println("Parent : "+super.age);
		System.out.println("GP : "+super.parentAge());
	}
	public static void main(String st[])
	{
		S s = new S();
		s.printFamilyData();
		P p1 =new P();
		System.out.println(s instanceof S);
		System.out.println(s instanceof P);
		System.out.println(s instanceof GP);
		System.out.println(p1 instanceof S);
	}
}