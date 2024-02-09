import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import java.util.*;
public class MyActionListener implements ActionListener
{
	MyFrame mf;
	MyActionListener(MyFrame f)
	{
		this.mf=f;
	}
	
	public void actionPerformed(ActionEvent e) 
	{
		if(e.getActionCommand().equals("Red light"))
		{
			this.mf.fieldBox.setText("STOP");
			this.mf.fieldBox.setBackground(Color.RED);
		}
		else if(e.getActionCommand().equals("Yellow light"))
		{
			this.mf.fieldBox.setText("READY");
			this.mf.fieldBox.setBackground(Color.YELLOW);
		}
		else if(e.getActionCommand().equals("Green light"))
		{
			this.mf.fieldBox.setText("GO");
			this.mf.fieldBox.setBackground(Color.GREEN);
		}
		else if(e.getActionCommand().equals("CLEAR"))
		{
			this.mf.fieldBox.setText(null);
			this.mf.fieldBox.setBackground(Color.WHITE);
		}
	}
}