/*
Lab Experiment 05
b) Write a Custom Exception and Use it.

Shashank Bagda - 20
*/

class MyException extends Exception 
{

}
 
// A Class that uses above MyException
public class Test 
{
    public static void main(String args[])
    {
        try
        {
            // Throw an object of user defined exception
            throw new MyException();
        }
        catch (MyException ex)
        {
            System.out.println("Caught");
            System.out.println(ex.getMessage());
        }
    }
}