package myBookStore;
import java.awt.*;
import java.awt.event.*;
import java.awt.AWTEvent.*;
class MyFrame extends Frame
{
	//Component
	TextField t1,t2;
	Label l1,l2;
	Button b1,b2;
	/*
		txtBook_Id
		btnBook_Save
		lblBook_Title
	*/
	MyActionListener ml = new MyActionListener(this);
	
	MyFrame(String s)
	{
		super(s);
		this.setBounds(0, 0, 1000, 800);
		setLayout(null);
		
		//Initialized Components
		
		t1 = new TextField();
		t2 = new TextField();
		b1 = new Button("SAVE");
		b2 = new Button("CLEAR");
		l1 = new Label("Book ID : ");
		l2 = new Label("Title : ");
		
		//Set Component
		l1.setBounds(50,50,425,200);
		t1.setBounds(525,50,425,200);
		
		l2.setBounds(50,300,425,200);
		t2.setBounds(525,300,425,200);
		
	
		b1.setBounds(150,550,275,200);
		b2.setBounds(575,550,275,200);
		
		Font f1 = new Font("Arial",Font.BOLD,90);
		Font f2 = new Font("Arial",Font.ITALIC,75);
		//SetFont
		l1.setFont(f1);
		l2.setFont(f1);
		t1.setFont(f1);
		t2.setFont(f1);
		b1.setFont(f2);
		b2.setFont(f2);
		//Add Component to Frame
		add(t1);
		add(t2);
		add(l1);
		add(l2);
		add(b1);
		add(b2);
		
		b1.addActionListener(ml);
		b2.addActionListener(ml);
		
		//When Frames X Button Pressed
		addWindowListener(new WindowAdapter()
			{
				//use closing method Not Closed
				public void windowClosing(WindowEvent e)
				{
					System.exit(0);
				}
			});
	}
	
	
	public static void main(String args[])
	{
		MyFrame mf = new MyFrame("My First Frame");
		mf.setVisible(true);
	}
}