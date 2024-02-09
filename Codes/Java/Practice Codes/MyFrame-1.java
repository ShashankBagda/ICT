import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import java.util.*;

public class MyFrame extends Frame
{
	Checkbox c1, c2, c3, c4, c5, c6, c7;
	Font f1;
	Button b1;

	MyActionListener mf = new MyActionListener(this);
	MyFrame()
	{
		super("ICT Addmission Eligibility");
		setLayout(null);
		setBounds(0,0,1260,1000);


		b1 = new Button("Check Eligibility");
		

		c1 = new Checkbox("Male");
		c2 = new Checkbox("Female");
		c3 = new Checkbox("Coding");
		c4 = new Checkbox("Reading");
		c5 = new Checkbox("Problem Solving");
		c6 = new Checkbox("Drawing");
		c7 = new Checkbox("Singing");

		f1 = new Font("Times",Font.BOLD,40);

		add(c1);
		add(c2);
		add(c3);
		add(c4);
		add(c5);
		add(c6);
		add(c7);

		add(b1);

		c1.setBounds(100,100,400,100);		
		c2.setBounds(600,300,400,100);
		c3.setBounds(100,500,400,100);
		c4.setBounds(600,100,400,100);		
		c5.setBounds(100,300,400,100);
		c6.setBounds(600,500,400,100);
		c7.setBounds(100,700,400,100);

		b1.setBounds(600,700,400,100);
		
		b1.addActionListener(mf);

		addWindowListener(new WindowAdapter()
			{
				public void windowClosing(WindowEvent we)
				{
					System.exit(0);
				}
			});
	}


	public static void main(String args[])
	{
		MyFrame mf = new MyFrame();
		mf.setVisible(true);
	}
}