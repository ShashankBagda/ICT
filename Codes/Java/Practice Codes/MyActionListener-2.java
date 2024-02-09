import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyActionListener implements ActionListener
{
	MyFrame fm;
	
	MyActionListener(MyFrame m)
	{
		this.fm = m;
	}
	
	public void actionPerformed(ActionEvent e)
	{
		System.out.println(e.getActionCommand());

		int value1 = Integer.parseInt(this.fm.t1.getText());
		int value2 = Integer.parseInt(this.fm.t2.getText());

		if(e.getActionCommand().equals("DIVIDE"))
			{
				float value;

				try  
		        {  
		        	value=value1/value2;
		        	this.fm.t3.setText(new Float(value).toString());
					System.out.println(value);
		        } 
		        
		        catch(ArithmeticException ef)  
		        {  
		            System.out.println(ef);
		            this.fm.t3.setText("ArithmeticException");
		        }
		        
		        catch(NumberFormatException ef)  
		        {  
		            System.out.println(ef);
		            this.fm.t3.setText("NumberFormatException");
		        }	
			}

	} 
}