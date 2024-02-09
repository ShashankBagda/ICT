using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Basics of C#

                //Console.WriteLine("Hello World");

                //for(int i = 0; i < 10; i++)
                //{
                //    for(int j = 0; j < 10; j++)
                //    {
                //        Console.Write(i);
                //    }
                //    Console.WriteLine();
                //}

                //do
                //{
                //    console.writeline("do-while");
                //} while (true);

                //Console.WriteLine("Enter you Input : ");
                //string name = Console.ReadLine();
                //Console.WriteLine(name);



            // Addition of two numbers

                int a, b, choice;

                Console.WriteLine("Enter input 1 : ");
                a = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Enter input 2 : ");
                b = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Enter your choice : \n 1 - Sum \n 2 - Sub \n 3 - Div \n 4 - Mul");
                choice = Convert.ToInt32(Console.ReadLine());
                    
                switch(choice)
                {
                    case 1: 
                        Console.WriteLine("The Sum is : " + (a + b));
                        break;
                    case 2:
                        Console.WriteLine("The Sub is : " + (a - b));
                        break;
                    case 3:
                        Console.WriteLine("The Div is : " + (a / b));
                        break;
                    case 4:
                        Console.WriteLine("The Mul is : " + (a * b));
                        break;

                    default: 
                        Console.WriteLine("Enter Valid Choice!!");
                    break;
            }
                
                
                

            Console.ReadKey();
        }
    }
}
