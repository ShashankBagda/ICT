using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Lab_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = 9, b = 9, result = 0;
            string choice = "";
            Console.WriteLine("Enter Value 1 : ");
            int.TryParse(Console.ReadLine(),out a);
            Console.WriteLine("Enter Value 2 : ");
            int.TryParse(Console.ReadLine(), out b);
            Start:
            Console.WriteLine("Enter inputs (+, -, *, /, e)");
            choice = Console.ReadLine();

            Calculate(a, b, choice,ref result);

            Console.WriteLine("{0} {1} {2} = {3}", a, choice, b, result);
            
            if (choice.ToLowerInvariant() != "e" )
            {
                goto Start;
            }
        }

        public static void Calculate(int a, int b, string choice
            ,ref int res)
        {
            res = 0;
            switch (choice)
            {

                case "+":
                    res = (a + b);
                    break;

                case "-":
                    res = (a - b);
                    break;

                case "*":
                    res = (a * b);
                    break;

                case "/":
                    res = (a / b);
                    break;

                case "e":
                case "E":
                    res = 0;
                    break;

                default:
                    res = 0;
                    Console.WriteLine("Enter Valid Choice!!");
                    break;
            }
        }
    }
}
