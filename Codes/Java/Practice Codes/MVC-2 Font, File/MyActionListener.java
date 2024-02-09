package myBookStore;
import java.awt.*;
import java.awt.event.*;
import java.awt.AWTEvent.*;
class MyActionListener implements ActionListener
{
	MyFrame fm;
	MyActionListener(MyFrame f)
	{
		this.fm=f;
	}
	public void actionPerformed(ActionEvent e)
	{
		int bookId = Integer.parseInt(this.fm.t1.getText());
		String title = this.fm.t2.getText();
		if(e.getActionCommand().equals("SAVE"))
		{
			Book b = new Book(bookId,title);
			try
			{
				b.saveObject("Book.txt");
			}
			catch(Exception ef)
			{
				System.out.println(ef);
			}
			
		}
		if(e.getActionCommand().equals("CLEAR"))
		{
			this.fm.t1.setText("");
			this.fm.t2.setText("");
		}
		
	}
}