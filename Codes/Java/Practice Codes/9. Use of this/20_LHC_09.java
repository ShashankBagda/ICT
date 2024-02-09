/*
LHC 1
9.  Write a program in Java to demonstrate use of this keyword.
    Check whether this can access the private members of the class or not.
Shashank Bagda
*/
class This
{
    private int x,y;
    void valueGet(int x, int y)
    {
        this.x=x;
        this.y=y;
    }
    void display()
    {
        int i,j,flag;
        System.out.println("Prime between "+x+" to "+y);
        System.out.println("------------------");
        for(i=x;i<=y;i++)
        {
            flag=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                System.out.println(i);
            }
        }
    }
}
class ThisDemoClass
{
    public static void main(String a[])
    {
        This T=new This();
        T.valueGet(1,100);
        T.display();
    }
}