import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import javax.swing.JFrame;

public class MyFrame extends Frame
{
	TextField t1,t2;
	Label l1,l2;
	Button b1, b2;
	JButton b3, b4;
	Font f1;
	MyActionListener ml;

	MyFrame()
	{
		super("ADD PLAYER NAME");
		setLayout(null);
		setBounds(0,0,1400,1000);
		ml = new MyActionListener(this);
		
		t1 = new TextField();
		t2 = new TextField();
		
		b1 = new Button("SAVE");
		b2 = new Button("START GAME");

		l1 = new Label("PLAYER 1");
		l2 = new Label("PLAYER 2");
		
		//Set Component
		l1.setBounds(50,50,400,200);
		t1.setBounds(425,50,400,200);
		
		l2.setBounds(50,300,400,200);
		t2.setBounds(425,300,400,200);

		b1.setBounds(50,550,300,200);
		b2.setBounds(425,550,300,200);

		Font f1 = new Font("Arial",Font.BOLD,30);
		
		//SetFont
		l1.setFont(f1);
		l2.setFont(f1);
		t1.setFont(f1);
		t2.setFont(f1);
		b1.setFont(f1);
		b2.setFont(f1);
	
		//Add Component to Frame
		add(t1);
		add(t2);
		add(l1);
		add(l2);
		add(b1);
		add(b2);

		b1.addActionListener(ml);
		b2.setVisible(false);
		b2.addActionListener(ml);

		//Add cross and circle symbol

		ImageIcon myImage1 = new ImageIcon("cross.png");
        JButton b3 = new JButton(myImage1);
        b3.setBounds(900,50,200,200);
        add(b3);

        ImageIcon myImage2 = new ImageIcon("circle.png");
        JButton b4 = new JButton(myImage2);
        b4.setBounds(900,300,200,200);
        add(b4);

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