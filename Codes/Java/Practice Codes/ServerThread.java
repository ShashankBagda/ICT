//4) Create Client-Server Chat with Multithreading. Multiple client can join chat with One Server.
/*
Shashank Bagda
LHC - 2
Q4
Server
*/

public class ServerThread extends Thread
{

    private Socket socket;
    private ArrayList<ServerThread> threadList;
    private PrintWriter output;

    public ServerThread(Socket socket,ArrayList<ServerThread> threads)
    {
        this.socket = socket;
        this.threadList = thread;
    }

    public void run()
    {
    
        try
        {
            BufferedReader input = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            output = new PrintWriter(socket.getOutputStream(), true);

            while(true) 
            {
                String output = input.readLine();
                if(outputString.equals("exist"))
                {
                    break;
                }
                printToAllClient(outputString);
                System.out.println("Server received" + outputString);
            }

        } 

        catch(Exception e)
        {
            System.out.println("Error occured in main of server" + e.getStackTrace);
        }
    }
}