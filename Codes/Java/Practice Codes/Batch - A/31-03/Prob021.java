import java.io.*;
class Test
{
	int a, b;
	Test(int p, int q) 
	{
		this.a=p;
		this.b=q;
	}
	void readFile() throws FileNotFoundException
	{
		FileReader fr = new FileReader("abc.txt");
		/*
		try
		{
			FileReader fr = new FileReader("abc.txt");
		}
		catch(FileNotFoundException f)
		{
			System.out.println(f);
		}
		*/
		
	}
}
class Main
{
	public static void main(String s1[]) throws FileNotFoundException
	{
		System.out.println("START");
		Test t1 = new Test(10,0);
		t1.readFile();
		/*
		try
		{
			t1.readFile();
		}
		catch(FileNotFoundException f)
		{
			System.out.println(f);
		}
		*/
		System.out.println("END");
	}
}

class ToRun
{
	public static void main(String s2[])
	{	
		System.out.println("START RUN");
		try
		{
			Main.main(s2);
		}
		catch(FileNotFoundException f)
		{
			System.out.println(f);
		}
		System.out.println("END RUN");
	}
}