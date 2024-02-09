/*
LHC 1
2. Write a program in Java to find maximum of three numbers using conditional operator.
Shashank Bagda
*/
import java.util.Scanner;
class Max
{
    public static void main(String[]args)
    {
        Scanner s = new Scanner(System.in);
        
        int one,two,three,max;
        
        System.out.print("Enter Value One : ");
            one = s.nextInt();
        
        System.out.print("Enter Value Two : ");
            two = s.nextInt();
        
        System.out.print("Enter Value Three : ");
            three = s.nextInt(); 
        
        max = one>two? one>three?one:three : two>three?two:three;
        
        System.out.println("Max is "+max);
    }
}