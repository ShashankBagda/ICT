import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyActionListener implements ActionListener
{
	MyFrame mf;
	
	MyActionListener(MyFrame m)
	{
		this.mf = m;
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getActionCommand().equals("SUM"))
		{
			System.out.println(e.getActionCommand() + "=" + this.mf.b1);
			//JOptionPane.showMessageDialog(null, "alert", "alert", JOptionPane.ERROR_MESSAGE);
			//JOptionPane.showConfirmDialog(null, "choose one", "choose one", JOptionPane.YES_NO_OPTION);
			//Object[] possibleValues = { "First", "Second", "Third" };
			//Object selectedValue = JOptionPane.showInputDialog(null, "Choose one", "Input",JOptionPane.INFORMATION_MESSAGE, null,possibleValues, possibleValues[0]);
			//System.out.println(selectedValue.toString());
		}		
	}
}