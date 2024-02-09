import java.util.*;
class SortingOnTitle implements Comparator<Book>
{
	public int compare(Book b1, Book b2)
	{
		return b1.title.compareTo(b2.title);
	}
}
class Book implements Comparable<Book>
{
	int bookId;
	String title;
	double price;
	
	Book(int a, String b, double c)
	{
		this.bookId = a;
		this.title = b;
		this.price = c;
	}
	public String toString()
	{
		return this.bookId+"#"+this.title+"#"+this.price;
	}
	public int compareTo(Book b1)
	{
		return new Double( - this.price + b1.price).intValue();
	}
	public static void main(String s[])
	{
		Book b[] = new Book [5];
		b[0] = new Book(1,"IWT",200.50);
		b[1] = new Book(2,"OOP",100.50);
		b[2] = new Book(3,"FOP",300.50);
		b[3] = new Book(4,"ICP",500.50);
		b[4] = new Book(5,"BEE",400.50);
		
		for(int i=0;i<b.length;i++)
		{
			System.out.println(b[i]);
		}
		System.out.println("Using Comparable \n ");
		//Comparable
		Arrays.sort(b);
		
		for(int i=0;i<b.length;i++)
		{
			System.out.println(b[i]);
		}
		
		System.out.println("Using Comparator \n ");
		//Comparator
		Arrays.sort(b,new SortingOnTitle());
		
		for(int i=0;i<b.length;i++)
		{
			System.out.println(b[i]);
		}
		
	}
}
/*
b[0].compareTo(b[1])
- 
0
+
*/
