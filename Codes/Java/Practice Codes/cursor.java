//3) Change type of Mouse Cursor based Button Click. Use at least 4 types of Mouse Cursor.
/*
Shashank Bagda
LHC - 2
Q3
*/

import java.awt.*;
import javax.swing.*;
class cursor extends JFrame 
{
    static JFrame f;

    static Label l, l1, l2, l3;

    cursor()
    {
    }
  
    public static void main(String args[])
    {
        try 
        {
            f = new JFrame("Shashank Bagda - LHC - Q3");

            JPanel p = new JPanel();
  
            l = new Label("Cursor Type One");
            l1 = new Label("Cursor Type Two");
            l2 = new Label("Cursor Type Three");
            l3 = new Label("Cursor Type Four");
  
            Cursor c = new Cursor(CROSSHAIR_CURSOR);
            Cursor c1 = new Cursor(MOVE_CURSOR);
            Cursor c2 = new Cursor(WAIT_CURSOR);
            Cursor c3 = new Cursor(HAND_CURSOR);
  
            l.setCursor(c);
            l1.setCursor(c1);
            l2.setCursor(c2);
            l3.setCursor(c3);
  
            p.add(l);
            p.add(l1);
            p.add(l2);
            p.add(l3);
  
            f.add(p);
  
            f.show();
            f.setSize(300, 300);
        }
        catch (Exception e) 
        {
            System.err.println(e.getMessage());
        }
    }
}