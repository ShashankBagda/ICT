import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import javax.swing.JFrame;

public class MyActionListener implements ActionListener
{
	MyFrame mf;
	MyFrame1 mf1;
	JButton b1;
	int j = 1;
	
	MyActionListener(MyFrame m){
		this.mf = m;
	}
	MyActionListener(MyFrame1 m){
		this.mf1 = m;
	}
	
	public void actionPerformed(ActionEvent e)
	{

		//System.out.println(e.getActionCommand());

		if(e.getActionCommand().equals("START GAME"))
		{
			mf1 = new MyFrame1();
			this.mf1.setVisible(true);
			this.mf.setVisible(false);
		}

		if(e.getActionCommand().equals("SAVE"))
		{
			String player1 = this.mf.t1.getText();
			String player2 = this.mf.t2.getText();

			System.out.println(player1);
			System.out.println(player2);

			this.mf.b2.setVisible(true);
		}

		String value = e.getActionCommand();
		if(e.getActionCommand().equals("q1") || e.getActionCommand().equals("q2") || e.getActionCommand().equals("q3") || e.getActionCommand().equals("q4") || e.getActionCommand().equals("q5") || e.getActionCommand().equals("q6") || e.getActionCommand().equals("q7") || e.getActionCommand().equals("q8") || e.getActionCommand().equals("q9"))
		{
			if(j==0)
			{
				System.out.println("even");
				j = 1;
				System.out.println(value);
				// try 
				// {
					switch(value)
					{
						case "q1":
						{
							mf1 = new MyFrame1();
							// this.mf1.q1.setVisible(false);
							// this.mf1.b1.setVisible(true);

							ImageIcon myImage1 = new ImageIcon("cross.png");

					        JButton b1 = new JButton(myImage1);
					        this.b1.setBounds(375,50,200,200);
					        //this.add(b1);
							
							break;
						} 
					}
				// }
				// catch(NullPointerException ex)
				// {
				// 	System.out.println(ex);
				// }
			}
			else
			{
				System.out.println("odd");
				System.out.println(value);
				//mf1 = new MyFrame1();
				//JButton value = new JButton();
				//this.mf1.value.setIcon(new ImageIcon(this.getClass().getResource("cross.png")));
				j = 0;
			}		
		}

		// int value = Integer.parseInt(e.getActionCommand());

		// if(value %2 == 0)
		// {
		// 	System.out.println("even");

		// 	switch(value)
		// 		{
		// 			case 2:
		// 				{
		// 					mf1 = new MyFrame1();
		// 					this.mf1.b2.setIcon(new ImageIcon(this.getClass().getResource("circle.png")));
		// 					break;
		// 				}

		// 			case 4:
		// 				{
		// 					mf1 = new MyFrame1();
		// 					this.mf1.b4.setIcon(new ImageIcon(this.getClass().getResource("circle.png")));
		// 					break;
		// 				}

		// 			case 6:
		// 				{
		// 					mf1 = new MyFrame1();
		// 					this.mf1.b6.setIcon(new ImageIcon(this.getClass().getResource("circle.png")));
		// 					break;
		// 				}

		// 			case 8:
		// 				{
		// 					mf1 = new MyFrame1();
		// 					this.mf1.b8.setIcon(new ImageIcon(this.getClass().getResource("circle.png")));
		// 					break;
		// 				}
		// 		}

		// }
		// else
		// {
		// 	System.out.println("odd");	
		// }
				
				

		// if((e.getActionCommand())%2 != 0)
		// {
		// 	mf1 = new MyFrame1();
		// 	int j = e;
			
		// }
		
	}
}