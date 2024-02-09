import java.io.*;
class Test
{
	int no;
	String name;
	
	Test(int n, String sn)
	{
		this.no = n;
		this.name = sn;
	}
	public String toString()
	{
		return this.no+","+this.name;
	}
	public static void main(String s[]) throws IOException
	{
		Test t1  = new Test(10,"ABCD");
		FileWriter fw = new FileWriter("test.txt");
		fw.write(t1.toString());
		fw.close();
		
		FileReader fr = new FileReader("test.txt");
		char ch[] = new char[100];
		fr.read(ch);
		fr.close();
		String myStr = String.valueOf(ch);
		String data[]  = myStr.split(",");
		System.out.println(data[0]);
		System.out.println(data[1]);
		
		Test t2  = new Test(Integer.valueOf(data[0]),data[1]);
		System.out.println(t2);
		
	}
}