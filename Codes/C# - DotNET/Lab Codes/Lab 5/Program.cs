using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Messaging;
using System.Text;
using System.Threading.Tasks;

namespace Lab_5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            One one = new One();
            
            one.SetStudentsCount(5);
            int idx = 0;
            one.AddStudent("Student-1",1,Semesters.Sem5, idx++);
            one.AddStudent("Student-2",2,Semesters.Sem5, idx++);
            one.AddStudent("Student-3",3,Semesters.Sem5, idx++);
            one.AddStudent("Student-4",4,Semesters.Sem7, idx++);
            one.AddStudent("Student-5",5,Semesters.Sem7, idx++);

            Faculty faculty1 = new Faculty
            {
                Name = "Shashank",
                semester = Semesters.Sem5
            };

            Faculty faculty2 = new Faculty
            {
                Name = "Hiten",
                semester = Semesters.Sem7
            };

            Console.WriteLine("Students Accessible to {0}", faculty1.Name);
            one.DisplayStudent(faculty1 );

            Console.WriteLine("Students Accessible to {0}", faculty2.Name);
            one.DisplayStudent(faculty2);

            Console.ReadKey();
        }
    }
}
