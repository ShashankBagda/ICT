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
	char ch[] = new char[10000];
	
	//Sending Option
	d1.writeUTF("Prob021.java"+"\n"+"Prob022.java"+"\n"+"Prob023.java");
	System.out.println("List of Files are forwarded");
	
	//Reading Option
	String fileName = d2.readUTF();
	System.out.println("Request for File is Received");
	
	FileReader fr = new FileReader(fileName);
	fr.read(ch);
	//Sending FileText
	System.out.println("File Text Sent");
	
	d1.writeUTF(new String(ch));
	fr.close();
	d1.close();
	d2.close();

 } 

}