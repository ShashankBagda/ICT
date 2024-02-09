import java.io.*;
import java.util.*;
class Student implements Comparable<Student>
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
	
	void setRoll(int a)
	{
		this.roll = a;
	}
	int getRoll()
	{
		return this.roll;
	}
	void setName(String a)
	{
		this.name = a;
	}
	String getName()
	{
		return this.name;
	}
	
	public String toString()
	{
		return this.roll + "#" + this.name + "#" + this.percentage;
	}
	public int compareTo(Student s1)
	{
		return this.roll-s1.roll;
	}
	static String arrayToString(Student s[])
	{
		String returnString = new String("");
		for(int i=0;i<s.length;i++)
		{
			if(i==s.length-1)
			{
				returnString+=s[i].toString();
			}
			else
			{
				returnString+=s[i].toString()+",";
			}
		}
		return returnString;
		
	}
	// 1#ABC#45.67$1#ABC#45.67$1#ABC#45.67$1#ABC#45.67$
	public static void main(String s[]) throws IOException
	{
		/*
		Student st[] = new Student[5];
		
		for(int i=0;i<st.length;i++)
		{
			st[i] = new Student(i+1, "ABC"+(st.length-i),(5.50)*(i+1);
		}
		st[0] = new Student(1,"ABC",45.67);
		st[1] = new Student(4,"DEF",44.43);
		st[2] = new Student(2,"XYZ",48.98);
		st[3] = new Student(5,"PQR",47.75);
		st[4] = new Student(3,"JKL",44.44);
		
		String rtString = Student.arrayToString(st);
		
		//System.out.println(rtString);
		
		FileWriter fw = new FileWriter("myStud.txt");
		fw.write(rtString);
		fw.close();
		*/
		
		char ch[] = new char[200];
		FileReader fr = new FileReader("myStud.txt");
		fr.read(ch);
		fr.close();
		
		String records = new String(ch);
		
		String record[] = records.split(",");
		//System.out.println(record.length);
		
		
		Student readStud[] = new Student[record.length];
		
		for(int i=0;i<record.length;i++)
		{
			String attr[] = record[i].split("#");
			readStud[i] = new Student(Integer.parseInt(attr[0]), attr[1], Double.parseDouble(attr[2]));
		}
		//All Records in Array readStud.
		int changeRoll=3;
		String newName ="SDFG";
		
		
		for(int i=0;i<readStud.length;i++)
		{
			//System.out.println(readStud[i]);
			if(readStud[i].getRoll()==changeRoll)
			{
				readStud[i].setName(newName);
			}
		}
		
		Arrays.sort(readStud);
		
		for(int i=0;i<readStud.length;i++)
		{
			System.out.println(readStud[i]);
		}
		
		String rtString = Student.arrayToString(readStud);
		FileWriter fw = new FileWriter("myStud.txt",true);
		fw.write(rtString);
		fw.close();
		
	}
}



/*
1#ABCD#45.67$2#DEF#67.89$3#PQR#12.34
*/