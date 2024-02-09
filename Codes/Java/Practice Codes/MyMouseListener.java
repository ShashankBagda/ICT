import java.awt.*;
import java.awt.event.*;
import java.awt.AWTEvent.*;
class MyMouseListener extends Mouse
{
	TextArea t1,t2;
 	MyMouseListener()
	{
		setLayout(null);
		setBounds(0,0,900,500);
		t1=new TextArea();
		t1.setBounds(100,200,300,400);
		add(t1);
		t2=new TextArea();
		t2.setBounds(450,200,300,400);
		add(t2);
		t2.addMouseListener(this);
		setVisible(true);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		}
		);
	}
	
	
	public static void main(String t[])
	{	
		MyMouseListener ml = new MyMouseListener();  
		
	}
	public void mouseClicked(MouseEvent e0)
	{
		t1.append("Mouse Clicked\n");
	}

	public void mouseEntered(MouseEvent e1)
	{
		t1.append("Mouse Entered\n");
	}

	public void mouseExited(MouseEvent e2)
	{
		t1.append("Mouse Exited\n");
	}

	public void mousePressed(MouseEvent e3)
	{
		t1.append("Mouse Pressed\n");
	}

	public void mouseReleased(MouseEvent e4)
	{
		t1.append("Mouse Released\n");
	}
	
}
