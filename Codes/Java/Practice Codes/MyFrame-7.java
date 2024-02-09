//1) Demonstrate Color Palette Dialog ( JColorChooser ) in java. Change Color of Label font/background 
//   based on selection from color dialog.

/*
LHC - 2 
Shashank Bagda
Q 1
*/
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.event.*;
import javax.swing.*;

public class MyFrame extends JFrame implements ActionListener
{
    JButton b1,b2;
    JLabel l1;    
    MyFrame()
    {      
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        
        b1 = new JButton("Choose Text Color");
        b1.addActionListener(this);

        b2 = new JButton("Choose Background Color");
        b2.addActionListener(this);
        
        l1 = new JLabel();
        l1.setText("SHASHANK BAGDA");
        l1.setFont(new Font("Arial",Font.BOLD,100));
        l1.setOpaque(true);
        
        this.add(b1);
        this.add(b2);
        this.add(l1);
        this.pack();
        this.setVisible(true);
    }
    
    public void actionPerformed(ActionEvent e) 
    {

        if(e.getSource()==b1) 
        {
            JColorChooser colorChooser = new JColorChooser();
            Color color = JColorChooser.showDialog(null, "Choose Color", Color.black);
            l1.setForeground(color);
        }

        if(e.getSource()==b2) 
        {
            JColorChooser colorChooser = new JColorChooser();
            Color color = JColorChooser.showDialog(null, "Choose Color", Color.black);
            l1.setBackground(color);
        }
    }

    public static void main(String[] args) 
    {
        new MyFrame();
    }
}