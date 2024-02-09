class Parent
{
	int adharNo;
	Parent()
	{
		this.adharNo=-1;
		//System.out.println("Parent Defualt Constructor");
	}
	Parent(int no)
	{
		this.adharNo=no;
		//System.out.println("Parent Parameterized Constructor");
	}
	int powerParent()
	{
		return this.adharNo*this.adharNo;	
	}
}
class Child extends Parent
{
	int adharNo; //Shadow Variable
	Child()
	{
		this.adharNo=0;
		//System.out.println("Child Defualt Constructor");
	}
	Child(int no)
	{
		super(no);
		//this.adharNo=super.adharNo+no; //we can access attributes using super
		this.adharNo = super.powerParent();
		//System.out.println("Child Parameterized Constructor");
	}
	public String toString()
	{
		return "Parent No = "+super.adharNo+"\nChild No = "+this.adharNo;
	}
	public static void main(String str[])
	{
		Child ch1 = new Child();
		Child ch2 = new Child(10);
		System.out.println(ch1);
		System.out.println(ch2);
	}
}