import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;
import java.util.*;

public class MyActionListener implements  ActionListener
{
	MyFrame mf;
	
	MyActionListener(MyFrame m)
	{
		this.mf = m;
	}
	
	public void itemStateChanged(ItemEvent e) 
	{
		if(e.getStateChange()==e.SELECTED)
		{
			System.out.println(e.getItem().toString() +" is Selected");
		}
		else
		{
			System.out.println(e.getItem().toString() +" is Deselected");
		}

	}
	
}