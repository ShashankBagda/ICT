class Student
{
	//Attributes
	int rollNo;
	int admissionYear;
	double percentage;
	
	static int noOfStudents=0;
	//Defualt Constructor
	Student()
	{
		noOfStudents=noOfStudents+1;
		this.rollNo=noOfStudents;
	}
	
}
class Prog004  //Prog004 is class name
{

	public static void main(String s[])
	{
		Student s1 = new Student();
		// Student() is called Constructor (Default)
		System.out.println(s1.rollNo);
		Student s2 = new Student();
		Student s3 = new Student();
		System.out.println(s3.rollNo);
		//noOfStudents is Static so can be accessed using Class Name
		System.out.println(Student.noOfStudents);
		System.out.println(s1.noOfStudents);
	}
}