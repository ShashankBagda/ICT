using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Lab_8
{
    class Program
    {
        static void Main(string[] args)
        {
            //One one = new One();
            //one.AddStudent("Shashank");
            //one.AddStudent("Bagda");
            //one.AddStudent(3, "b", false);

            //for (int i = 0; i < one.students.Count; i++)
            //{
            //    var student = one.students[i];
            //    Console.WriteLine("Id : " + student.Id);
            //    Console.WriteLine("Name : " + student.Name);
            //    Console.WriteLine("IsActive : " + student.IsActive);
            //    Console.WriteLine();
            //}





            Student s1, s2, s3;
            s1 = new Student(1, "Shashank", true);
            s1.Display();
            s2 = new Student(2, "Bagda", true);
            s2.Display();
            s3 = new Student(3, "Shash", true);
            s3.Display();

            Student.disp(s1);
            Student.disp(s2);
            Student.disp(s3);

        }
    }
    //class FibonacciSeries
    //{
    //        static void Main(string[] args)
    //        {
    //            int n = 100; // Change this value to generate the desired number of Fibonacci numbers

    //            Console.WriteLine("Fibonacci Series:");

    //            int firstNumber = 0;
    //            int secondNumber = 1;

    //            Console.Write($"{firstNumber} {secondNumber}");

    //            for (int i = 2; i < n; i++)
    //            {
    //                int nextNumber = firstNumber + secondNumber;
    //                Console.Write($" {nextNumber}");

    //                firstNumber = secondNumber;
    //                secondNumber = nextNumber;
    //            }

    //            Console.WriteLine();
    //        }
    //}

}
