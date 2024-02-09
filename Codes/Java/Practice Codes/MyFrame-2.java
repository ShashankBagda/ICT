import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	TextField t1,t2,t3;
	Label l1,l2,l3;
	Button b1;
	Font f1;
	
	MyActionListener ml = new MyActionListener(this);
	MyFrame()
	{
		super("Division Exception");
		setLayout(null);
		setBounds(0,0,1600,1000);
		
		t1 = new TextField();
		t2 = new TextField();
		t3 = new TextField();

		b1 = new Button("DIVIDE");

		l1 = new Label("NUMBER 1");
		l2 = new Label("NUMBER 2");
		l3 = new Label(" ANSWER ");

		//Set Component
		l1.setBounds(50,50,425,200);
		t1.setBounds(525,50,425,200);
		
		l2.setBounds(50,300,425,200);
		t2.setBounds(525,300,425,200);

		l3.setBounds(50,550,425,200);
		t3.setBounds(525,550,425,200);
		
		b1.setBounds(1000,175,425,200);

		Font f1 = new Font("Arial",Font.BOLD,30);
		
		//SetFont
		l1.setFont(f1);
		l2.setFont(f1);
		l3.setFont(f1);
		t1.setFont(f1);
		t2.setFont(f1);
		t3.setFont(f1);
		b1.setFont(f1);
	
		//Add Component to Frame
		add(t1);
		add(t2);
		add(t3);
		add(l1);
		add(l2);
		add(l3);
		add(b1);
		
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