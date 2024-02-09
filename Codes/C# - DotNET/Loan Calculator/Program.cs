using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Loan_Calculator
{
    class Program
    {
        static double emi_calculator(double p, double r, double t)
        {
            double emi;

            r = r / (12 * 100); // one month interest
            t = t * 12; // one month period
            emi = (p * r * (double)Math.Pow(1 + r, t))
                   / (double)(Math.Pow(1 + r, t) - 1);

            return (emi);
        }

        static void Main(string[] args)
        {
            double loan, rate, tenure, emi, payment;
            string option;
            
            Console.WriteLine("Welcome to Loan Calculator - Developed by Shashank Bagda\n");

            Console.Write("Enter Loan Amount : ");
            loan = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Interest Rate (%) : ");
            rate = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Loan Tenure (Months) : ");
            tenure = Convert.ToDouble(Console.ReadLine());

            emi = emi_calculator(loan, rate, (tenure/12));

            Console.WriteLine("Your Monthly EMI amount is : {0}",emi);

            Console.WriteLine("Do you want to do partpayment (y/n) ? ");
            option = Console.ReadLine();

            if(option == "y" || option == "Y" || option == "1" || option =="yes" || option=="Yes")
            {
                Console.WriteLine("Enter Partpayment Amount : ");
                payment = Convert.ToDouble(Console.ReadLine());

                loan = loan - payment;

                emi = emi_calculator(loan, rate, (tenure / 12));

                Console.WriteLine("Your Revised EMI amount is : {0}", emi);
            }
            else
            {
                Console.WriteLine("Thank You !!");
            }
        }
    }
}
