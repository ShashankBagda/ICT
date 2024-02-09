package myBookStore;
import java.io.*;
class Book
{
	int bookId;
	String title;
	
	Book(int a, String b)
	{
		this.bookId=a;
		this.title=b;
	}
	
	public String toString()
	{
		return "Book ID : "+this.bookId+" Title = "+this.title;
	}
	public String writeInFile()
	{
		return this.bookId+","+this.title;
	}
	public void saveObject(String fileName) throws IOException
	{
		File f = new File(fileName);
		System.out.println(f.exists());
		if(f.exists())
		{
			FileWriter fw = new FileWriter(fileName,true);
			fw.write("#"+this.writeInFile());
			fw.close();
		}
		else
		{
			FileWriter fw = new FileWriter(fileName);
			fw.write(this.writeInFile());
			fw.close();
		}
		
	}
}