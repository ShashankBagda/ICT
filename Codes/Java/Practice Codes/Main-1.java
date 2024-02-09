//4) Create Client-Server Chat with Multithreading. Multiple client can join chat with One Server.
/*
Shashank Bagda
LHC - 2
Q4
Client
*/

public class Main
{
	public static void main(String args[])
	{
		try(Socket socket = new Socket("localhost",5000))
		{;
		BufferedReader input = new BufferedReader(new java.io.InputStreamReader(socket.getInputStream()));
		PrintWriter output = new PrintWriter(socket.getOutStream(),true);
		Scanner scanner = new scanner(System.in);
		String userInput;
		String reponse;
		String ClientName = "empty";
		ClientThread clientThread = new ClientThread(socket);
		ClientThread.start();


		do
		{
			if(clientName.equals("empty")) 
			{
				System.out.println("Enter your name");
				userInput = scanner.nextLine();
				clientName = userInput;
				output.println(userInput);
				if(userInput.equals("exit")) 
				{
					break;
				}
			}
			else
			{
				String message = ("("+ clientName +")"+" message: ");
				System.out.printn(message);
				userInput = scanner.nextLine();
				output.println(message +" "+ userInput);
				
				if(userInput.equals("exit")) 
				{
					break;
				}
			}

		} while (!userInput.equals("exit"));


		}

		catch(Exception e)
		{
			System.out.println("Exception in client main" + e.printStackTrace());
		}
	}

}