import java.io.*;
import java.net.*; 
 
class Server
{
    public String[] sub;
    public String[] add;
    public String[] mul;
    public String[] div;
    public String ans,cal,sp;
    public static void main(String args[])throws Exception
    {
        Server v = new Server();
        v.server();
    }
    public void server() throws Exception 
    {
        ServerSocket ss = new ServerSocket(888);
  
        Socket s = ss.accept();
        System.out.println("User Connected");
  
        PrintStream ps = new PrintStream(s.getOutputStream());
  
        BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
  
        BufferedReader kb= new BufferedReader(new InputStreamReader(System.in));
  
        while (true) {
  
            String str, str1;
            while ((str = br.readLine()) != null) 
			{
				str1=forcal(str);
                ps.println(str1);
            }
            ps.close();
            br.close();
            kb.close();
            ss.close();
            s.close();
            System.exit(0);
  
        }
    }
	public String forcal(String in)
	{
		add = in.split("\\+");
        cal="add";
        if(add.length!=2)
        {
            sp="sub";
        }
		if(sp=="sub")
        {
            sub = in.split("\\-");
            cal="sub";
            if(sub.length!=2)
            {
                sp="mul";
            }
        }
        if(sp=="mul")
        {
            mul = in.split("\\*");
            cal="mul";
            if(mul.length!=2)
            {
                sp="div";
            }
        }
        if(sp=="div")
        {
            div = in.split("\\/");
            cal="div";
            if(div.length!=2)
            {
                sp="invalid";
            }
        }
        if(sp=="invalid")
        {
            ans="invalid input";
			cal=null;
        }
        if(cal=="add")
        {
            try
		    {
                double num1=Double.parseDouble(add[0]);
                double num2=Double.parseDouble(add[1]);
                ans =String.valueOf(num1+num2);
		    } 
			catch(Exception ie) 
			{
				ans =String.valueOf(ie); 
			}
        }
        else if(cal=="sub")
        {
            try
		    {
                double num1=Double.parseDouble(sub[0]);
                double num2=Double.parseDouble(sub[1]);
			    ans =String.valueOf(num1-num2);
		    } 
			catch(Exception ie) 
			{
				ans =String.valueOf(ie); 
			}
        }
        else if(cal=="mul")
        {
            try
		    {
                double num1=Double.parseDouble(mul[0]);
                double num2=Double.parseDouble(mul[1]);
			    ans =String.valueOf(num1*num2);
		    } 
			catch(Exception ie) 
			{
				ans =String.valueOf(ie); 
			}
        }
        else if(cal=="div")
        {
            try
		    {
			    double num1=Double.parseDouble(div[0]);  
			    double num2=Double.parseDouble(div[1]);
                ans =String.valueOf(num1/num2);
		    } 
			catch(Exception ie) 
			{
				ans =String.valueOf(ie); 
			}
        }
		return ("Ans is :- "+ans);
	}
}