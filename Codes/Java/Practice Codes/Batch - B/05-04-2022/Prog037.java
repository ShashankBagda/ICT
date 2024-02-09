import java.io.*;

class Test extends Exception
{
	public static void main(String s[])
	{
		//FileReader fr = new FileReader("test.java");
		//System.out.println(s[2]);
		throw new Test();
	}
}