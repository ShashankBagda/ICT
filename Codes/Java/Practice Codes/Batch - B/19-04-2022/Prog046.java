import java.util.*;
class SortOnNo implements Comparator<Test>
{
	public int compare(Test t1, Test t2)
	{
		return t1.no - t2.no;
	}
}
class Test
{
	int no;
	String name;
	
	Test(int a, String b)
	{
		this.no = a;
		this.name = b;
	}
	public String toString()
	{
		return "No = "+this.no+" Name = "+this.name;
	}
	public static void main(String st[])
	{
		ArrayList <Test> al = new ArrayList<Test>();
		al.add(new Test(1,"AJAY"));
		al.add(new Test(3,"SANJAY"));
		al.add(new Test(5,"VIJAY"));
		al.add(new Test(2,"DHANANJAY"));
		al.add(new Test(4,"JAY"));
		
		Iterator <Test> ir = al.iterator();
		
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		//Remove Object
		System.out.println("After Removing : ");
		al.remove(2);
		
		ir = al.iterator();
		
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		//Sorting on ArrayList
		System.out.println("After Sorting : ");
		Collections.sort(al, new SortOnNo());
		
		ir = al.iterator();
		
		while(ir.hasNext())
		{
			System.out.println(ir.next());
		}
		
	}
}