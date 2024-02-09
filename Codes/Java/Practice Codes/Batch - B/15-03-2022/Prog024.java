import java.util.*;

class DemoFunction
{
	int sum(int a, int b)
	{
		return (a+b);
	}
	int sumUpToN(int a)
	{
		int total=0;
		while(a>0)
		{
			total = total + a;
			a--;
		}
		return total;
	}
	
	int factorial(int a)
	{
		if(a==0)
			return 1;
		return a*factorial(a-1);
	}
	public static void main(String s[])
	{
		Scanner sc =new Scanner(System.in);
		int no1 = sc.nextInt();
		int no2 = sc.nextInt();
		DemoFunction dm = new DemoFunction();
		System.out.println(dm.sum(no1,no2));
		System.out.println(dm.sumUpToN(no1));
		System.out.println(dm.factorial(no1));
	}
}