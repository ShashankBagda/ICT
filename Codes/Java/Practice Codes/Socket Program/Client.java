import java.net.*;
import java.io.*;
class Client
{
 public static void main(String s[]) throws Exception
 {
 Socket ss=new Socket("localhost",5000);
 DataInputStream d1=new DataInputStream(ss.getInputStream());
 String st;
 while(true)
 {
	st =d1.readUTF();
	if(st.compareTo("STOP")==0)
		break;
	System.out.println(st);
 }
 
 d1.close();
 } 
}