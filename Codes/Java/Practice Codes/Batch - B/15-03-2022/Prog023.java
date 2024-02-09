import java.util.*;

class DemoScanner
{
	public static void main(String ds[])
	{
		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		double d = sc.nextDouble();
		System.out.println("Int  = "+i);
		System.out.println("Double = "+d);
		
		sc.nextLine();//To get Enter Key
		
		System.out.println("Enter Your Name : ");
		String name = sc.nextLine();
		System.out.println("Your Name is : "+name);
		
	}
}