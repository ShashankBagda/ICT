import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import java.util.*;

public class MyActionListener implements ActionListener
{
	MyFrame mf;
	MyFrame1 mf1;
	MyFrame2 mf2;
	MyFrame3 mf3;
	
	MyActionListener(MyFrame m)
	{
		this.mf = m;
	}
	
	MyActionListener(MyFrame1 m)
	{
		this.mf1 = m;
	}

	MyActionListener(MyFrame2 m)
	{
		this.mf2 = m;
	}

	MyActionListener(MyFrame3 m)
	{
		this.mf3 = m;
	}
	
	public void actionPerformed(ActionEvent e)
	{
		//System.out.println(e.getActionCommand());

		if(e.getActionCommand().equals("Next"))
		{
			int year = Integer.parseInt(this.mf.t1.getText());
			System.out.println(year);

			if(year >= 00)
			{
				System.out.println("Verified");

				try 
				{
					String s=Integer.toString(year);
				    FileWriter myWriter = new FileWriter("Date.txt");
				    myWriter.write(s);
				    myWriter.write(" / ");
				    myWriter.close();
				    System.out.println("Successfully wrote to the file.");
			    } 
			    catch (IOException ex) 
			    {
				    System.out.println("An error occurred.");
				    ex.printStackTrace();
			    }
			}
			else
			{
				mf3 = new MyFrame3();
				this.mf3.setVisible(true);
				this.mf3.t1.setText("Invalid Date");
			}
			mf1 = new MyFrame1();
			this.mf1.setVisible(true);
		}
		
		if(e.getActionCommand().equals(" Next"))
		{
			int month = Integer.parseInt(this.mf1.t1.getText());
			System.out.println(month);
			if(month >= 01 && month <= 12)
			{
				System.out.println("Verified");

				try 
				{
					String s=Integer.toString(month);
					FileWriter myWriter = new FileWriter("Date.txt", true);
				    myWriter.write(s);
				    myWriter.write(" / ");
				    myWriter.close();
				    System.out.println("Successfully wrote to the file.");
			    } 
			    catch (IOException ex) 
			    {
				    System.out.println("An error occurred.");
				    ex.printStackTrace();
			    }
			}
			else
			{
				mf3 = new MyFrame3();
				this.mf3.setVisible(true);
				this.mf3.t1.setText("Invalid Date");
			}
			mf2 = new MyFrame2();
			this.mf2.setVisible(true);
		}

		if(e.getActionCommand().equals("Next "))
		{
			int date = Integer.parseInt(this.mf2.t1.getText());
			System.out.println(date);
			if(date >= 00 && date<=31)
			{
				System.out.println("Verified");

				try 
				{
					String s=Integer.toString(date);
				    FileWriter myWriter = new FileWriter("Date.txt", true);
				    myWriter.write(s);
				    myWriter.close();
				    System.out.println("Successfully wrote to the file.");
			    } 
			    catch (IOException ex) 
			    {
				    System.out.println("An error occurred.");
				    ex.printStackTrace();
			    }
			}
			else
			{
				mf3 = new MyFrame3();
				this.mf3.setVisible(true);
				this.mf3.t1.setText("Invalid Date");
			}
			mf3 = new MyFrame3();
			this.mf3.setVisible(true);			
		}

		if(e.getActionCommand().equals("Get"))
		{
			try 
			{
			    File myObj = new File("Date.txt");
			    Scanner myReader = new Scanner(myObj);
			    while (myReader.hasNextLine()) 
				{
				    String data = myReader.nextLine();
				    this.mf3.t1.setText(data.toString());
				    System.out.println(data);
				}
			    myReader.close();
		    } 
		    catch (FileNotFoundException ex) 
		    {
			    System.out.println("An error occurred.");
			    ex.printStackTrace();
		    }
		}
	}
}