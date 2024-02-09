import java.io.*;
class Test
{
	int v1, v2;
	Test(int a, int b)
	{
		this.v1=a;
		this.v2=b;
	}
	int divide() throws IOException
	{
		FileWriter fw = new FileWriter("abc.txt");		
		return (this.v1/this.v2);
	}
	public static void main(String str[]) throws IOException
	{
		Test t = new Test(40,0);
		System.out.println(t.divide());
	}
}