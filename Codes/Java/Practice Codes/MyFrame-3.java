import java.awt.*;
import java.awt.event.*;
import java.awt.AWTEvent.*;
import java.lang.*;
import javax.swing.*;
public class MyFrame extends JFrame
{
	
	JFrame f;
	
	JRadioButton btRed,btYellow,btGreen;
	
	JTextField fieldBox;
	
	JButton clear;

	MyActionListener ml = new MyActionListener(this);
	
	MyFrame()
	{
		
		f=new JFrame("Traffic Light");
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		btRed = new JRadioButton("Red light");
		btYellow = new JRadioButton("Yellow light");
		btGreen = new JRadioButton("Green light");

		fieldBox = new JTextField(" ");
		fieldBox.setBackground(Color.WHITE);
		
		clear = new JButton("CLEAR");
		
		//Set Component
		
		fieldBox.setBounds(190,130,125,30);
		
		btRed.setBounds(50,180,125,50);
		btYellow.setBounds(190,180,125,50);
		btGreen.setBounds(330,180,125,50);
		
		clear.setBounds(150,380,200,50);
		
		Font f1 = new Font("Arial",Font.BOLD,15);

		//SetFont
		
		clear.setFont(f1);
		btRed.setFont(f1);
		btYellow.setFont(f1);
		btGreen.setFont(f1);
		fieldBox.setFont(f1);
		
		
		f.add(fieldBox);
		f.add(btRed);
		f.add(btYellow);
		f.add(btGreen);
		f.add(clear);
		
		this.btRed.addActionListener(ml);
		this.btYellow.addActionListener(ml);
		this.btGreen.addActionListener(ml);
		this.clear.addActionListener(ml);
		this.fieldBox.addActionListener(ml);
		
		
		f.setLayout(null);
		f.setSize(510,500);
		f.setVisible(true);
	}
	
	public static void main(String[] args) 
	{
		new MyFrame();
		
	}
}