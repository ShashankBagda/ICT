import java.io.*;
class Student
{
	int roll;
	String name;
	double percentage;
	
	Student(int a, String b, double c)
	{
		this.roll = a;
		this.name = b;
		this.percentage = c;
	}
	public String toString()
	{
		return this.roll + "#" + this.name + "#" + this.percentage;
	}
	public static void main(String s[]) throws IOException
	{
		Student st = new Student(1,"ABCD",45.67);
		FileWriter fw = new FileWriter("myStud.txt");
		fw.write(st.toString());
		fw.close();
		
		char ch[] = new char[100];
		FileReader fr = new FileReader("myStud.txt");
		fr.read(ch);
		fr.close();
		
		String record = new String(ch);
		String attr[] = record.split("#");	
		
		Student st1 = new Student(Integer.parseInt(attr[0]), attr[1], Double.parseDouble(attr[2]));
		
		System.out.println(st1);
	}
}