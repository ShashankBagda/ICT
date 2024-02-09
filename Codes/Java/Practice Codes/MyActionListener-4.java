import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
 
public class MyActionListener implements ActionListener
{
	MyFrame mf;
	String no1 = "",no2 = "";
	int i = 0;
	MyActionListener(MyFrame m)
	{
		this.mf = m;
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource().equals(this.mf.clr))
		{
			this.mf.txt_Scr.setText("");
		}
		else if(e.getSource().equals(this.mf.plus))
		{
			no1 = this.mf.txt_Scr.getText();
			this.mf.txt_Scr.setText("");
			i = i + 1;
		}
		else if(e.getSource().equals(this.mf.minus))
		{
			no1 = this.mf.txt_Scr.getText();
			this.mf.txt_Scr.setText("");
			i = i + 2;
		}
		else if(e.getSource().equals(this.mf.multi))
		{
			no1 = this.mf.txt_Scr.getText();
			this.mf.txt_Scr.setText("");
			i = i + 3;
		}
		else if(e.getSource().equals(this.mf.divide))
		{
			no1 = this.mf.txt_Scr.getText();
			this.mf.txt_Scr.setText("");
			i = i + 4;
		}
		else if(e.getSource().equals(this.mf.ans))
		{
			no2 = this.mf.txt_Scr.getText();
			
			switch(i)
			{
				case 1:
				{
					this.mf.txt_Scr.setText(new String(new Integer(Integer.parseInt(no1)+Integer.parseInt(no2)).toString()));
					i = 0;
					break;
				}
				case 2:
				{
					this.mf.txt_Scr.setText(new String(new Integer(Integer.parseInt(no1)-Integer.parseInt(no2)).toString()));
					i = 0;
					break;
				}
				case 3:
				{
					this.mf.txt_Scr.setText(new String(new Integer(Integer.parseInt(no1)*Integer.parseInt(no2)).toString()));
					i = 0;
					break;
				}
				case 4:
				{
					this.mf.txt_Scr.setText(new String(new Float(Float.parseFloat(no1)/Float.parseFloat(no2)).toString()));
					i = 0;
					break;
				}
			}
		}
		else
		{
			this.mf.txt_Scr.setText((this.mf.txt_Scr.getText()+e.getActionCommand()).toString());
		}
		
	}
}