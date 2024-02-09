import java.util.*;

class Student
{
	int rollNo;
	String name;
	
	Student(int x, String y)
	{
		this.rollNo = x;
		this.name = y;
	}
	
	public String toString()
	{
		return "Roll No = "+this.rollNo +" Name = "+ this.name;
	}
	public boolean equals(Object obj)
	{
		if(this.rollNo == ((Student)obj).rollNo && (this.name.compareTo(((Student)obj).name))==0 )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public static void main(String a[])
	{
		ArrayList <Student> arl = new ArrayList<Student>();
		arl.add(new Student(123,"AAA"));
		arl.add(new Student(323,"DDD"));
		arl.add(new Student(223,"AAA"));
		arl.add(new Student(113,"BBB"));
		
		Iterator ir = arl.iterator();
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		System.out.println();
		arl.add(4,new Student(444,"EEE"));
		
		ir = arl.iterator();
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		
		System.out.println();
		
		ArrayList<Student> arCopy = (ArrayList<Student>)arl.clone();
		ir = arCopy.iterator();
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		System.out.println("Original");
		arl.remove(2);
		ir = arl.iterator();
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		
		System.out.println("Clone");
		ir = arCopy.iterator();
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		System.out.println("Contains");
		System.out.println(arCopy.contains(new Student(323,"DDD")));
		System.out.println(arCopy.indexOf(new Student(323,"DDD")));
		
		
	}
}