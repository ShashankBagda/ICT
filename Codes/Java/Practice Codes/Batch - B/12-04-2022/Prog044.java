import java.util.*;
class Student implements Comparable<Student>
{
	int rollNo;
	String name;
	double percentage;
	
	Student(int i, String j, double k)
	{
		this.rollNo = i;
		this.name = j;
		this.percentage = k;
	}
	public String toString()
	{
		return "Roll No : "+this.rollNo+"\nName : "+this.name+"\nPercentage = "+this.percentage;
	}
	public int compareTo(Student s)
	{
		return new Double(- this.percentage + s.percentage).intValue();
	}
	public static void main(String s[])
	{
		Student st[] = new Student [5];
		st[0] = new Student(1,"ABC",73.00);
		st[1] = new Student(2,"TUV",56.00);
		st[2] = new Student(3,"XYZ",79.00);
		st[3] = new Student(4,"JKL",83.00);
		st[4] = new Student(5,"PQR",43.00);
		
		for(int i=0;i<st.length;i++)
		{
			System.out.println(st[i]);
		}
		Arrays.sort(st);
		for(int i=0;i<st.length;i++)
		{
			System.out.println(st[i]);
		}
		
	}
}
//st[0].compareTo(st[1]);
 