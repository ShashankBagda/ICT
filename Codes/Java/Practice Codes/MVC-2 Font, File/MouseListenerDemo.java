import java.awt.*;
import java.awt.event.*;
import java.awt.AWTEvent.*;
class MyMouseListener implements MouseListener
{
	MyMouseListener()
	{
		Frame f = new Frame("MOUSE Listener DEMO");
		f.setBounds(0,0,800,800);
		f.setVisible(true);
		f.setLayout(null);
		f.addMouseListener(this);
	}
	public void mouseClicked(MouseEvent e)  {
		System.out.println("mouseClicked");
	}
	public void mouseEntered(MouseEvent e)  {
		System.out.println("mouseEntered");
	}
	public void mouseExited(MouseEvent e)  {
		System.out.println("mouseExited");
	}
	public void mousePressed(MouseEvent e)  {
		System.out.println("mousePressed");
	}
	public void mouseReleased(MouseEvent e)  {
		System.out.println("mouseReleased");
	}
	public static void main(String s[])
	{
		MyMouseListener m = new MyMouseListener();
	}
}