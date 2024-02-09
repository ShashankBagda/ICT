package p1;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	Button b1;
	TextField t1,t2,t3;
	MyActionListener ml = new MyActionListener(this);
	MyFrame()
	{
		super("My Test Application");
		setLayout(null);
		setBounds(0,0,1260,1000);
		
		
		t1=new TextField();
		t2=new TextField();
		t3=new TextField();
		b1=new Button("SUM");
		
		add(t1);
		add(t2);
		add(t3);
		add(b1);
		
		t1.setBounds(100,160,150,50);
		t2.setBounds(100,220,150,50);
		t3.setBounds(100,280,150,50);
		b1.setBounds(100,340,50,50);
		
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