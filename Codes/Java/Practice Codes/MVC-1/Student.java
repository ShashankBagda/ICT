package p1;
public class Student
{
	int rollNo;
	String name;
	
	Student(int a, String b)
	{
		this.rollNo=a;
		this.name=b;
	}
	
	public String toString()
	{
		return "Roll No : "+this.rollNo+" Name = "+this.name;
	}
}