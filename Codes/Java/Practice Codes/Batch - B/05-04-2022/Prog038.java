abstract class Person //6. Abstract Class
{
	private String name;
	private String city;
	Person(String s)
	{
		this.name=s;
		this.city="Rajkot";
	}
	Person(String s1, String s2) //1. Constructor Overloading
	{
		this.name=s1;
		this.city=s2;
	}
	void setName(String n)
	{
		this.name = n;
	}
	String getName()
	{
		return this.name;
	}
	void setCity(String n)
	{
		this.city = n;
	}
	abstract String getCity();
}
class Student extends Person //3. Inheritance
{
	int enroll;
	int semester;
	String city; //4. Shadow Variable
	double spi;
	
	Student(String n, int e)
	{
		super(n);
		this.enroll = e;
		this.semester = 1;
		this.city = "Rajkot";
		this.spi = 0.0;
	}
	//Overriding
	void setCity(String n)
	{
		this.city = n;
	}
	//Abstarct Method Implementation
	String getCity()
	{
		return this.city;
	}
	public String toString()
	{
		return super.getName()+" | "+this.enroll+" | "+this.semester +
		" | "+this.spi + " | "+this.city;
	}
	public static void main(String st[])
	{
		Student s1 = new Student("XYZ",12);
		System.out.println (s1);
	}
}