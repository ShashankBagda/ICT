import java.net.*;
import java.io.*;
import java.util.*;
class Client
{
 public static void main(String s[]) throws Exception
 {
 Socket ss=new Socket("localhost",5000);
 DataInputStream d1=new DataInputStream(ss.getInputStream());
 DataOutputStream d2=new DataOutputStream(ss.getOutputStream());
 String st1;
 String st;
 Scanner sc1 = new Scanner(System.in);
 while(true)
 {
	st =d1.readUTF();
	if(st.compareTo("STOP")==0)
		break;
	System.out.println(st);



    st1 = sc1.nextLine();
    if(st1.compareTo("STOP")==0)
    {
        break;
    }
    d2.writeUTF(st1);
  
 }
 d2.close();
 d1.close();
 } 
}