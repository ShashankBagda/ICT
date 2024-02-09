/*
Lab Experiment - 02

B) Write a java program to display the employee details using Scanner class.

Shashank Bagda
*/
import java.util.*;

class Detail
{
	public static void main(String[]args)
		{
			int emp_id;
			Scanner s=new Scanner(System.in);
			System.out.println("Enter employee id ");
			
			emp_id=s.nextInt();
			s.nextLine();
			String emp_name=new String();
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter employee name ");
			
			emp_name=s.nextLine();
			
			System.out.println("Employee id:"+emp_id);
			
			System.out.println("Employee name :"+emp_name);
			
		}
}