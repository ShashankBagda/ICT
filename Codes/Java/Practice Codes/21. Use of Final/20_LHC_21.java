/*
LHC 1
21. Write a program in Java to demonstrate use of final class.
Shashank Bagda
*/
class FinalClass
{
    protected int a=10;
    protected int b=20;
}

final class FinalClassDemo extends FinalClass
{
    FinalClassDemo()
    {
        System.out.println("The Final Class");
    }
    
    void add()
    {
        int c=a+b;
        System.out.println("Addition : "+c);
    }
}
class FinalMainClass
{
    public static void main(String arg[])
    {
        FinalClassDemo f=new FinalClassDemo();
        f.add();
    }
}