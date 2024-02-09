import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	int row=9,column=3;
	Label[][] box = new Label [row][column];
	JButton Fetch;
	Font f1;
	MyActionListener ml = new MyActionListener(this);
	MyFrame()
	{
		setLayout(null);
		this.setBounds(0,0, 610, 750);
		
		JPanel panel =new JPanel();
		
		panel.setLayout(new GridLayout(row,column));
		
		f1 = new Font("Arial",Font.BOLD,30);
		Fetch = new JButton("Fetch");
		Fetch.setFont(f1);
		Fetch.setBounds(200,680,200,50);
		
		for(int loop1=0;loop1<row;loop1++)
		{
			for(int loop2=0;loop2<column;loop2++)
			{
				box[loop1][loop2] = new Label();
				box[loop1][loop2].setFont(f1);
				panel.add(box[loop1][loop2]);
			}
		}
		Fetch.addActionListener(ml);
		panel.setBounds(10,50,580,600);
		add(Fetch);
		add(panel);
		
		addWindowListener(new WindowAdapter()
			{
				public void windowClosing(WindowEvent we)
				{
					System.exit(0);
				}
			});	
	}
	public static void main(String s[])   
	{  
		
		MyFrame mf = new MyFrame();
		mf.setVisible(true);
	}  
}