import java.net.*;
import java.io.*;
import java.util.*;
class Server
{
 public static void main(String s[]) throws Exception
 {
 ServerSocket ss=new ServerSocket(5000);
 Socket s1=ss.accept();
 //System.out.println(s1);
 DataOutputStream d1=new DataOutputStream(s1.getOutputStream());
 DataInputStream d2=new DataInputStream(s1.getInputStream());
 String st;
 String st1;
 Scanner sc = new Scanner(System.in);
 while(true)
 {
	st = sc.nextLine();
	if(st.compareTo("STOP")==0)
	{
		break;
	}
	d1.writeUTF(st);



    st1 =d2.readUTF();
    if(st1.compareTo("STOP")==0)
        break;
    System.out.println(st1);
 }
 d2.close();
 d1.close();
 } 
}