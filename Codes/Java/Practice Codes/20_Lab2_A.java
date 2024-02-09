/*
Lab Experiment - 02

A) Write a java program for Method overloading and Constructor overloading

Shashank Bagda
*/
class T1
{
	int num1;
	int num2;

	public void add(int i,int j)
	{
		System.out.println(i+j);
	}

	public void add(int i,int j,int k)
	{
		System.out.println(i+j+k);
	}

	T1()
	{
		num1=5;
		num2=10;
	}

	T1(int a,int b)
	{
		num1=a;
		num2=b;
	}

	void Display()
	{
		System.out.println(num1);
		System.out.print(num2);
	}

	public static void main(String[]args)
	{
		T1 t0=new T1();
		T1 t2=new T1(1,3);
		t2.Display();
		System.out.println("");
		t0.Display();
		System.out.println("");
		t0.add(1,9);
		t2.add(1,6,7);
	}			
}