import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import java.lang.*;

public class MyFrame extends Frame
{
	Button b1, b2;

    TextField t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,t20;
    TextField t21,t22,t23,t24,t25,t26,t27,t28,t29,t30,t31,t32,t33,t34,t35,t36,t37,t38,t39,t40;
    TextField t41,t42,t43,t44,t45,t46,t47,t48,t49,t50,t51,t52,t53,t54,t55,t56,t57,t58,t59,t60,t61;

    MyActionListener ml;
	
	MyFrame()
	{
		super("Division Exception");
		setLayout(null);
		setBounds(0,0,1600,1000);
		
		ml = new MyActionListener(this);

        t1 = new TextField();		t11 = new TextField();		t21 = new TextField();
        t2 = new TextField();		t12 = new TextField();		t22 = new TextField();
        t3 = new TextField();		t13 = new TextField();		t23 = new TextField();
        t4 = new TextField();		t14 = new TextField();		t24 = new TextField();
        t5 = new TextField();		t15 = new TextField();		t25 = new TextField();
        t6 = new TextField();		t16 = new TextField();		t26 = new TextField();
        t7 = new TextField();		t17 = new TextField();		t27 = new TextField();
        t8 = new TextField();		t18 = new TextField();		t28 = new TextField();
        t9 = new TextField();		t19 = new TextField();		t29 = new TextField();
        t10 = new TextField();		t20 = new TextField();		t30 = new TextField();

        t31 = new TextField();		t41 = new TextField();		t51 = new TextField();
        t32 = new TextField();		t42 = new TextField();		t52 = new TextField();
        t33 = new TextField();		t43 = new TextField();		t53 = new TextField();
        t34 = new TextField();		t44 = new TextField();		t54 = new TextField();
        t35 = new TextField();		t45 = new TextField();		t55 = new TextField();
        t36 = new TextField();		t46 = new TextField();		t56 = new TextField();
        t37 = new TextField();		t47 = new TextField();		t57 = new TextField();
        t38 = new TextField();		t48 = new TextField();		t58 = new TextField();
        t39 = new TextField();		t49 = new TextField();		t59 = new TextField();
        t40 = new TextField();		t50 = new TextField();		t60 = new TextField();

        t61 = new TextField();

         t1.setBounds(270,425,50,50);		t11.setBounds(945,350,50,50);		t21.setBounds(270,275,50,50);
         t2.setBounds(345,425,50,50);		t12.setBounds(870,350,50,50);		t22.setBounds(345,275,50,50);
         t3.setBounds(420,425,50,50);		t13.setBounds(795,350,50,50);		t23.setBounds(420,275,50,50);
         t4.setBounds(495,425,50,50);		t14.setBounds(720,350,50,50);		t24.setBounds(495,275,50,50);
         t5.setBounds(570,425,50,50);		t15.setBounds(645,350,50,50);		t25.setBounds(570,275,50,50);
         t6.setBounds(645,425,50,50);		t16.setBounds(570,350,50,50);		t26.setBounds(645,275,50,50);
         t7.setBounds(720,425,50,50);		t17.setBounds(495,350,50,50);		t27.setBounds(720,275,50,50);
         t8.setBounds(795,425,50,50);		t18.setBounds(420,350,50,50);		t28.setBounds(795,275,50,50);
         t9.setBounds(870,425,50,50);		t19.setBounds(345,350,50,50);		t29.setBounds(870,875,50,50);
        t10.setBounds(945,425,50,50);		t20.setBounds(270,350,50,50);		t30.setBounds(945,275,50,50);

        t31.setBounds(945,200,50,50);		t41.setBounds(270,125,50,50);		t51.setBounds(945,50,50,50);
        t32.setBounds(870,200,50,50);		t42.setBounds(345,125,50,50);		t52.setBounds(870,50,50,50);
        t33.setBounds(795,200,50,50);		t43.setBounds(420,125,50,50);		t53.setBounds(795,50,50,50);
        t34.setBounds(720,200,50,50);		t44.setBounds(495,125,50,50);		t54.setBounds(720,50,50,50);
        t35.setBounds(645,200,50,50);		t45.setBounds(570,125,50,50);		t55.setBounds(645,50,50,50);
        t36.setBounds(570,200,50,50);		t46.setBounds(645,125,50,50);		t56.setBounds(570,50,50,50);
        t37.setBounds(495,200,50,50);		t47.setBounds(720,125,50,50);		t57.setBounds(495,50,50,50);
        t38.setBounds(420,200,50,50);		t48.setBounds(795,125,50,50);		t58.setBounds(420,50,50,50);
        t39.setBounds(345,200,50,50);		t49.setBounds(870,125,50,50);		t59.setBounds(345,50,50,50);
        t40.setBounds(270,200,50,50);		t50.setBounds(945,125,50,50);		t60.setBounds(270,50,50,50);

        t61.setBounds(70,180,80,80);

        
        
        add(t1);		add(t12);		add(t23);		add(t34);		add(t45);		add(t56);		
        add(t2);		add(t13);		add(t24);		add(t35);		add(t46);		add(t57);		
        add(t3);		add(t14);		add(t25);		add(t36);		add(t47);		add(t58);		
        add(t4);		add(t15);		add(t26);		add(t37);		add(t48);		add(t59);		
        add(t5);		add(t16);		add(t27);		add(t38);		add(t49);		add(t60);		
        add(t6);		add(t17);		add(t28);		add(t39);		add(t50);		add(t61);		
        add(t7);		add(t18);		add(t29);		add(t40);		add(t51);				
        add(t8);		add(t19);		add(t30);		add(t41);		add(t52);			
        add(t9);		add(t20);		add(t31);		add(t42);		add(t53);				
        add(t10);		add(t21);		add(t32);		add(t43);		add(t54);		
        add(t11);		add(t22);		add(t33);		add(t44);		add(t55);	
        
        Button b1 = new Button("PLAYER - 1");
        b1.setBounds(50,50,120,80);
        b1.setBackground(Color. RED);
        add(b1);
        b1.addActionListener(ml);
        

        Button b2=new Button("PLAYER - 2");
        b2.setBounds(50,310,120,80);
        b2.setBackground(Color. GREEN);
        add(b2);
        b2.addActionListener(ml);
		
		addWindowListener(new WindowAdapter()
			{
				public void windowClosing(WindowEvent we)
				{
					System.exit(0);
				}
			});
	}
	public static void main(String args[])
	{
			MyFrame mf = new MyFrame();
			mf.setVisible(true);
	}
}