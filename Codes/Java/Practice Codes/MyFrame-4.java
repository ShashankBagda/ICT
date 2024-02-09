 import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	TextField txt_Scr;
	Button b0,b1,b2,b3,b4,b5,b6,b7,b8,b9;
	Button plus,minus,multi,divide,clr,ans;
	
	MyActionListener  m1 = new MyActionListener(this);
	 MyFrame()
	{
		super("Calculator");
		setLayout(null);
		setBounds(200,200,400,540);
		
		txt_Scr = new TextField();
		txt_Scr.setBounds(20,30,360,100);
		b0 = new Button("0");
		b1 = new Button("1");
		b2 = new Button("2");
		b3 = new Button("3");
		b4 = new Button("4");
		b5 = new Button("5");
		b6 = new Button("6");
		b7 = new Button("7");
		b8 = new Button("8");
		b9 = new Button("9");
		plus = new Button("+");
		minus = new Button("-");
		multi= new Button("*");
		divide= new Button("/");
		clr = new Button("CE");
		ans = new Button("=");
		
		add(txt_Scr);
		add(b0);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(b5);
		add(b6);
		add(b7);
		add(b8);
		add(b9);
		add(plus);
		add(minus);
		add(multi);
		add(divide);
		add(clr);
		add(ans);
		
		b0.setBounds(0,440,100,100);
		b1.setBounds(0,140,100,100);
		b2.setBounds(100,140,100,100);
		b3.setBounds(200,140,100,100);
		b4.setBounds(0,240,100,100);
		b5.setBounds(100,240,100,100);
		b6.setBounds(200,240,100,100);
		b7.setBounds(0,340,100,100);
		b8.setBounds(100,340,100,100);
		b9.setBounds(200,340,100,100);
		plus.setBounds(200,440,100,100);
		minus.setBounds(300,440,100,100);
		multi.setBounds(300,340,100,100);
		divide.setBounds(300,240,100,100);
		clr.setBounds(300,140,100,100);
		ans.setBounds(100,440,100,100);
		
		
		txt_Scr.addActionListener(m1);
		b0.addActionListener(m1);
		b1.addActionListener(m1);
		b2.addActionListener(m1);
		b3.addActionListener(m1);
		b4.addActionListener(m1);
		b5.addActionListener(m1);
		b6.addActionListener(m1);
		b7.addActionListener(m1);
		b8.addActionListener(m1);
		b9.addActionListener(m1);
		plus.addActionListener(m1);
		minus.addActionListener(m1);
		multi.addActionListener(m1);
		divide.addActionListener(m1);
		clr.addActionListener(m1);
		ans.addActionListener(m1);
		
		Font f1 = new Font ("Arial",Font.BOLD,35);
		txt_Scr.setFont(f1);
		b0.setFont(f1);
		b1.setFont(f1);
		b2.setFont(f1);
		b3.setFont(f1);
		b4.setFont(f1);
		b5.setFont(f1);
		b6.setFont(f1);
		b7.setFont(f1);
		b8.setFont(f1);
		b9.setFont(f1);
		plus.setFont(f1);
		minus.setFont(f1);
		multi.setFont(f1);
		divide.setFont(f1);
		clr.setFont(f1);
		ans.setFont(f1);
		
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
			 MyFrame mf = new  MyFrame();
			mf.setVisible(true);
	}
	
}   