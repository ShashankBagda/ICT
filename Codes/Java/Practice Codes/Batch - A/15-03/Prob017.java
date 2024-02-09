import java.util.*;
class DemoScanner
{
	public static void main(String st[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter INT Value : ");
		int i = sc.nextInt();
		System.out.println("INT Value = "+i);
		
		System.out.println("Enter DOUBLE Value : ");
		double d = sc.nextDouble();
		System.out.println("DOUBLE Value = "+d);
		
		sc.nextLine();
		
		System.out.println("Enter String : ");
		String s1 = sc.nextLine();
		System.out.println("String Value = "+s1);
		
	}
}