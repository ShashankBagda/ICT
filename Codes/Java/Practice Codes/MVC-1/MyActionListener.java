package p1;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyActionListener implements ActionListener
{
	MyFrame mf;
	
	MyActionListener(MyFrame m){
		this.mf = m;
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource().equals(this.mf.b1))
		{
			this.mf.t3.setText(new Integer(new Integer(this.mf.t1.getText())+new Integer(this.mf.t2.getText())).toString());
			System.out.println("Button Clicked");
		}
		
	}
}