import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	Button b1;
	TextField t1,t2;
	Font f1;
	MyActionListener al = new MyActionListener(this);
	MyFrame()
	{
		super("My Test Application");
		setLayout(null);
		setBounds(0,0,800,800);
		
		f1 = new Font("Arial",Font.ITALIC,30);
		t1=new TextField();
		t2=new TextField();
		b1 = new Button("COMPUTE");
		
		t1.setFont(f1);
		t2.setFont(f1);
		b1.setFont(f1);
		
		add(b1);
		add(t1);
		add(t2);
		
		t1.setBounds(20,150,400,100);
		b1.setBounds(20,400,400,100);
		t2.setBounds(20,600,400,100);
		
		b1.addActionListener(al);
		
		addWindowListener(new WindowAdapter()
			{
				public void windowClosing(WindowEvent we)
				{
					System.exit(0);
				}
			});
		
	}
	
	public static void main(String s[]) throws IOException
	{
		MyFrame mf = new MyFrame();
		mf.setVisible(true);
	}
}