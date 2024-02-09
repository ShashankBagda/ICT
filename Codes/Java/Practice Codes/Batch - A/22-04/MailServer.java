import java.net.*;
import java.io.*;
import java.util.*;
class Server
{
 public static void main(String s[]) throws Exception
 {
	ServerSocket ss=new ServerSocket(5000);
	Socket s1=ss.accept();
	System.out.println("Connction Accepted from "+s1.getInetAddress().toString());
	DataOutputStream d1= new DataOutputStream(s1.getOutputStream());
	DataInputStream d2= new DataInputStream(s1.getInputStream());
	
	String st;
	
	
	//Sending Option
	d1.writeUTF("Welcome to My Email Program \n Send Your Email Address : ");
	
	
	//Reading Option
	String fileName = d2.readUTF();
	
	String para[] = new String[1];
	para[0] = fileName;
	
	SendMailBySite.main(para);
	
	d1.close();
	d2.close();

 } 

}