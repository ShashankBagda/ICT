import java.io.*;
import java.net.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Client
{
    Client()
    {
        try
        {
            Socket s = new Socket("localhost", 888);
            DataOutputStream dos= new DataOutputStream(s.getOutputStream());
    
            BufferedReader br= new BufferedReader(new InputStreamReader(s.getInputStream()));

            Frame f = new Frame();
            f.setLayout(null);
            f.setTitle("Maths Server");
            f.setBounds(100, 100, 500, 300);

            JTextField main = new JTextField();
            JLabel out = new JLabel();
            JButton ans = new JButton("Ans");

            Font f1 = new Font("Serif", Font.BOLD, 30);
		    main.setFont(f1);
            out.setFont(f1);
            ans.setFont(f1);

            main.setBounds(50, 75, 250, 50);
            ans.setBounds(330, 75, 100, 50);
            out.setBounds(50, 150, 350, 50);
            ans.addActionListener(new ActionListener() 
            {
                public void actionPerformed(ActionEvent e) 
                {
                    String input = main.getText();
                    try 
                    {
                        dos.writeBytes(input + "\n");
                        String output;
                        output =  br.readLine();
                        out.setText(output);
                    } 

                    catch (IOException ex) 
                    {
                        System.out.print(ex);
                    }

                }

            });
            f.add(main);
            f.add(ans);
            f.add(out);

            f.setVisible(true);
            f.addWindowListener(new WindowAdapter() 
            {
                public void windowClosing(WindowEvent we) 
                {

                    System.exit(0);
                }
            });
        }
        catch(Exception ie)
        {
            System.out.println(ie);
        }
    }
    public static void main(String[] args)
    {
		new Client();
	}

}