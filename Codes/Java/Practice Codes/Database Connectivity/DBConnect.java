//set classpath=mysql-connector.jar;.;
import java.sql.*;  
class MysqlCon
{  
	public static void main(String args[])
	{  
		try
		{  
			Class.forName("com.mysql.jdbc.Driver");  
			Connection con=DriverManager.getConnection(  
			"jdbc:mysql://localhost/ict?characterEncoding=utf8","root","");  
			
			//here ict is database name, root is username and password  
			Statement stmt=con.createStatement();
			
			String query =  "SELECT * FROM subject order by subjectName";			
			//System.out.println(query);
			ResultSet rs=stmt.executeQuery(query);  
			while(rs.next())
			{
				System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3));
				//System.out.println(rs.getString(1));  				
			}
				
			con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  