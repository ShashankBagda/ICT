import java.io.*;
//class Test extends FileNotFoundException //Checked Exception
class Test extends ArrayIndexOutOfBoundsException //Unchecked Exception
{
	String msg;
	Test(String m)
	{
		this.msg = m;
	}
}
class T 
{
	void testing() throws Test
	{
		throw new Test("ABCD");
	}
	public static void main(String s[]) //Main Thread
	{
		//FileReader fr = new FileReader("abc.def");
		//System.out.println(s[3]);
		Test t1 = new Test("Done");
		new T().testing();
	}
}


//FileReader fr = new FileReader("abc.def");
//Compile Time Exception OR Checked Exception