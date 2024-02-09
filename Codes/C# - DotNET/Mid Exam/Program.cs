using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


// Write a program to generate calculator with below operations in console application : +, -, * ,/ ,%
// User have to provide 3 inputs for all the operations except /, % which should show result only for operations /,% for 2 inputs to be provided which should show Divisor and Remainder both results.
// Also ask user if he is willing to proceed for another calculation the repeat process again.

namespace Mid_Exam
{
    class Calculator
    {
        public static void Addition()
        {
            Console.Write("\nEnter Number 1 : ");
            double one = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Number 2 : ");
            double two = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Number 3 : ");
            double three = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("\nThe Addition {0} + {1} + {2} is : " + (one + two + three) + "\n",one,two,three);
        }
        public static void Substraction()
        {
            Console.Write("\nEnter Number 1 : ");
            double one = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Number 2 : ");
            double two = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Number 3 : ");
            double three = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("\nThe Substraction {0} - {1} - {2} is : " + (one - two - three) + "\n", one, two, three);
        }

        public static void Multiplication()
        {
            Console.Write("\nEnter Number 1 : ");
            double one = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Number 2 : ");
            double two = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Number 3 : ");
            double three = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("\nThe Multiplication {0} * {1} * {2} is : " + (one * two * three) + "\n", one, two, three);
        }

        public static void Division()
        {
            Console.Write("\nEnter Number 1 : ");
            int one = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Number 2 : ");
            int two = Convert.ToInt32(Console.ReadLine());

            try
            {
                double result = Convert.ToDouble(one / two);
                Console.WriteLine("\nThe Division {0} / {1} is : " + result + "\n",one,two);
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine("\n" + e.Message + "\n");
            }
        }

        public static void Modulas()
        {
            Console.Write("\nEnter Number 1 : ");
            int one = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Number 2 : ");
            int two = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("\nThe Modulas of {0} % {1} = " + (one / two) + " and Remainder is : " + (one % two) + "\n",one,two);
        }
        static void Main(string[] args)
        {
            bool loop = true;

            Console.WriteLine("--- Welcome to My Calculator ---\n");

            while(loop)
            {
                Console.WriteLine("\n- Please select the Operation -\n");

                Console.WriteLine(
                    "Enter + for Addition\n" +
                    "Enter - for Substraction\n" +
                    "Enter * for Multiplication\n" +
                    "Enter / for Division\n" +
                    "Enter % for Modulas\n");

                Console.Write("Enter Choice : ");
                char choice = Convert.ToChar(Console.ReadLine());

                switch (choice)
                {
                    case '+':
                        Addition();
                        break;
                    case '-':
                        Substraction();
                        break;
                    case '*':
                        Multiplication();
                        break;
                    case '/':
                        Division();
                        break;
                    case '%':
                        Modulas();
                        break;
                }

                Console.Write("Do you want to calculate again? Yes/No : ");
                string repeat = Console.ReadLine();

                if(repeat == "Yes" ||  repeat =="Y" ||  repeat == "YES" || repeat == "yes" || repeat == "y")
                {
                    loop = true;
                }
                else
                {
                    loop = false; 
                    Console.WriteLine("\nSee You Next Time !!");
                }
            }
        }
    }
}
