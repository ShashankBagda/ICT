/*
LHC - 2
Q - 5 / View 3
Shashank Bagda
05-06-22
*/

import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame2 extends Frame
{
	TextField t1;
	Label l1; 
	Button b1;
	Font f1;
	MyActionListener ml;

	MyFrame2()
	{
		
		super("View 3");
		setLayout(null);
		setBounds(810,0,400,500);
		ml = new MyActionListener(this);

		Font f1 = new Font("Arial",Font.BOLD,30);

		l1 = new Label("Enter Date");
		l1.setBounds(120,50,200,100);
		l1.setFont(f1);
		add(l1);

		t1 = new TextField();
		t1.setBounds(100,200,200,100);
		t1.setFont(f1);
		add(t1);

		b1=new Button("Next ");
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
	
}