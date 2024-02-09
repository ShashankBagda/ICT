//4) Create Client-Server Chat with Multithreading. Multiple client can join chat with One Server.
/*
Shashank Bagda
LHC - 2
Q4
Client
*/
import java.net.Socket;
import java.net.Socket;

public class ClientThread extends Threads
{
	private Socket socket;
	private BufferedReader input;

	public ClientThread(Socket s)throws IOException
	{
		this.socke = s;
		this.input = new BufferedReader(new InputStreamReader(socket.getStackTrace()));
	}

	public void run()
	{
		try
		{
			while(true)
			{
				String response = input.readLine();
				System.out.println(response);
			}
		}
		catch (IOException e)
		{
			e.printStackTrace();
		}
		finally 
		{
			try
			{
				input.close();
			}
				catch(Exception e)
			{
				e.printStackTrace();
			}
		}
	}
}