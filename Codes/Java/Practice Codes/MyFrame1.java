import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import javax.swing.JFrame;

public class MyFrame1 extends Frame
{
	Button q1,q2,q3,q4,q5,q6,q7,q8,q9;
	JButton b1,b2,b3,b4,b5,b6,b7,b8,b9;
	MyActionListener ml;
	MyFrame1()
	{
		
		super("TIC TAC TOE");
		setLayout(null);
		setBounds(0,0,1400,1200);
		ml = new MyActionListener(this);

//Button
		Button q1 = new Button("q1");
        q1.setBounds(375,50,200,200);
        add(q1);

        Button q2 = new Button("q2");
        q2.setBounds(600,50,200,200);
        add(q2);

        Button q3 = new Button("q3");
        q3.setBounds(825,50,200,200);
        add(q3);

        Button q4 = new Button("q4");
        q4.setBounds(375,275,200,200);
        add(q4);

        Button q5 = new Button("q5");
        q5.setBounds(600,275,200,200);
        add(q5);

        Button q6 = new Button("q6");
        q6.setBounds(825,275,200,200);
        add(q6);

        Button q7 = new Button("q7");
        q7.setBounds(375,500,200,200);
        add(q7);

        Button q8 = new Button("q8");
        q8.setBounds(600,500,200,200);
        add(q8);

        Button q9 = new Button("q9");
        q9.setBounds(825,500,200,200);
        add(q9);
		

//JButton

        // ImageIcon myImage1 = new ImageIcon("cross.png");

        // JButton b1 = new JButton(myImage1);
        // b1.setBounds(375,50,200,200);
        // add(b1);

        JButton b2 = new JButton("b2");
        b2.setBounds(600,50,200,200);
        add(b2);

        JButton b3 = new JButton("b3");
        b3.setBounds(825,50,200,200);
        add(b3);

        JButton b4 = new JButton("b4");
        b4.setBounds(375,275,200,200);
        add(b4);

        JButton b5 = new JButton("b5");
        b5.setBounds(600,275,200,200);
        add(b5);

        JButton b6 = new JButton("b6");
        b6.setBounds(825,275,200,200);
        add(b6);

        JButton b7 = new JButton("b7");
        b7.setBounds(375,500,200,200);
        add(b7);

        JButton b8 = new JButton("b8");
        b8.setBounds(600,500,200,200);
        add(b8);

        JButton b9 = new JButton("b9");
        b9.setBounds(825,500,200,200);
        add(b9);
		
		//b1.setVisible(false);
		b2.setVisible(false);
		b3.setVisible(false);
		b4.setVisible(false);
		b5.setVisible(false);
		b6.setVisible(false);
		b7.setVisible(false);
		b8.setVisible(false);
		b9.setVisible(false);
		
//Add to frame		
		// b1.addActionListener(ml);
		// b2.addActionListener(ml);
		// b3.addActionListener(ml);
		// b4.addActionListener(ml);
		// b5.addActionListener(ml);
		// b6.addActionListener(ml);
		// b7.addActionListener(ml);
		// b8.addActionListener(ml);
		// b9.addActionListener(ml);

		q1.addActionListener(ml);
		q2.addActionListener(ml);
		q3.addActionListener(ml);
		q4.addActionListener(ml);
		q5.addActionListener(ml);
		q6.addActionListener(ml);
		q7.addActionListener(ml);
		q8.addActionListener(ml);
		q9.addActionListener(ml);
		
		addWindowListener(new WindowAdapter()
			{
				public void windowClosing(WindowEvent we)
				{
					System.exit(0);
				}
			});
	}
	
}