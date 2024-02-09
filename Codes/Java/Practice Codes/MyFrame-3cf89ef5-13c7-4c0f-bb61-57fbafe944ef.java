//	5)  Create Four View and One Controller. You need to Select/Enter Year from First View, 
//		Month from Second and Date from Third. If Date is Valid then Display Date in 
//		Fourth View else Display Message "Invalid Date" on Fourth view.

/*
LHC - 2
Q - 5 / View 1
Shashank Bagda
05-06-22
*/

// Enter all data in Integer

import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	TextField t1;
	Label l1; 
	Button b1;
	Font f1;
	MyActionListener ml;

	MyFrame()
	{
		super("View 1");
		setLayout(null);
		setBounds(0,0,400,500);
		ml = new MyActionListener(this);

		Font f1 = new Font("Arial",Font.BOLD,30);

		l1 = new Label("Enter Year");
		l1.setBounds(120,50,200,100);
		l1.setFont(f1);
		add(l1);

		t1 = new TextField();
		t1.setBounds(100,200,200,100);
		t1.setFont(f1);
		add(t1);

		b1=new Button("Next");
		add(b1);
		b1.setBounds(100,350,200,100);
		b1.addActionListener(ml);


		
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