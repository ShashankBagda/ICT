import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import java.util.*;
public class MyActionListener implements ActionListener
{
	MyFrame mf;
	String s1,s2;
	MyActionListener(MyFrame m)
	{
		this.mf=m;
	}
	public void actionPerformed(ActionEvent e)
	{
		int value=1;
		s1= this.mf.t1.getText();
		int i = Integer.parseInt(s1);
		for(int j=1;j<=i;j++)
		{
			value=value*j;
		}		
		this.mf.t2.setText(new Integer(value).toString());
		System.out.println(value);
	}
}