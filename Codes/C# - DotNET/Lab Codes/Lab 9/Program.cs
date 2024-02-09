using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_9
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Student student = new Student()
            //{
            //    Id = 1,
            //    Name = "Shashank",
            //    IsActive = true,
            //    sem = "5"
            //};

            //Faculty faculty = new Faculty()
            //{
            //    Id = 1,
            //    Name = "Nagin",
            //    Experience = 11
            //};

            //student.Intro();
            //Console.WriteLine();
            //faculty.Intro();

            Student student = new Student();
            
            Console.WriteLine("Enter StudentId - ");
            student.Id = Console.ReadLine().ToInteger();

            Console.WriteLine("Enter Name - ");
            student.Name = Console.ReadLine();

            Console.WriteLine("Enter Sem - ");
            student.sem = Console.ReadLine();

            Console.WriteLine("Is Active - ");
            student.IsActive = Console.ReadLine();

            student.Intro();

        }
    }
}
