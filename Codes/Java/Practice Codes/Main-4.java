import java.io.*;
import java.util.*;
class Main
{
    public static void main(String[]args) throws Exception
    {
        FileReader fr=new FileReader("data.txt");
        BufferedReader br=new BufferedReader(fr);
        int count=1;
        File f=new File("data.txt");
        Scanner f1=new Scanner(f);
        String str=br.readLine();
            while(f1.hasNextLine())
            {
                System.out.print(count + " : ");
                System.out.print(str);
                f1.nextLine();
                str=br.readLine();
                count++;
            }
    }
}