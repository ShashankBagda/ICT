/*
LHC - 2
Q - 5 / View 4
Shashank Bagda
05-06-22
*/

import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame3 extends Frame
{
	TextField t1;
	Button b1;
	Label l1; 
	Font f1;
	MyActionListener ml;

	MyFrame3()
	{
		
		super("View 4");
		setLayout(null);
		setBounds(1215,0,400,500);
		ml = new MyActionListener(this);

		Font f1 = new Font("Arial",Font.BOLD,30);

		l1 = new Label("Full Date Display");
		l1.setBounds(80,50,250,100);
		l1.setFont(f1);
		add(l1);

		b1=new Button("Get");
		add(b1);
		b1.setBounds(100,350,200,100);
		b1.addActionListener(ml);

		t1 = new TextField();
		t1.setBounds(100,200,200,100);
		t1.setFont(f1);
		add(t1);

		addWindowListener(new WindowAdapter()
			{
				public void windowClosing(WindowEvent we)
				{
					System.exit(0);
				}
			});
	}
	
}