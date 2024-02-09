/*
Lab Experiment 5
a) Write a Java Program to demonstrate Exception Handling using try, catch and finally.

Shashank Bagda - 20
*/
class Main
{
    public static void main (String args[])
    {
        //Try Block 
        try
        {
            System.out.println ("Try Block");
            int div = 125 / 5;
            System.out.println ("Answer : " + div);
        } 
        
        //Catch Block
        catch (NullPointerException e)
        {
            System.out.println ("Catch Block");
            System.out.println (e);
        } 
        
        //Finally Block
        finally
        {
            System.out.println ("Finally Block");
        } 
        
    } 
}