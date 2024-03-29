/*
Weekly Task 4 - Comparable

20_Shashank Bagda
*/

import java.util.*;

class Student implements Comparable<Student>
{  
	int rollno;  
	String name;  
	int age;  
	
	Student(int a,String b,int c)
	{  
		this.rollno = a;  
		this.name = b;  
		this.age = c;  
	}  
  
	public String toString()
	{
		return this.rollno+" "+this.name+" "+this.age;
	} 

	public int compareTo(Student b1)
	{
		return new Double( - this.age + b1.age).intValue();
	}

	public static void main(String s[])
	{

		Student b[] = new Student [5];
		b[0] = new Student(1,"  Name-1  ",16);
		b[1] = new Student(2,"  Name-2  ",18);
		b[2] = new Student(3,"  Name-3  ",14);
		b[3] = new Student(4,"  Name-4  ",15);
		b[4] = new Student(5,"  Name-5  ",19);

		System.out.println("Using Comparable according to Age in decending order\n ");
		
		//Comparable
		
		Arrays.sort(b);
		
		for(int i=0;i<b.length;i++)
		{
			System.out.println(b[i]);
		}
		
	}
}  