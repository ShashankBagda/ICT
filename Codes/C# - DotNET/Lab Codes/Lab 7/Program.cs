using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_7
{
    class Program
    {
        static void Main(string[] args)
        {
            //Student o1 = new Student();
            //o1.SetValues("Shashank", "Bagda");
            //Console.WriteLine(o1.FullName);


            //Student student = new Student();
            //student.setName("Shashank");
            //student.setLname("Bagda");
            //student.Display();


            IStudent o1 = new Student();
            IStudent o2 = new Student2();

            o1.setName("Shashank");
            o1.setName("Bagda");
            o1.Display();

            Demo demo = new Demo();
            demo.DisplayObj(o1);
            demo.DisplayObj(o2);



        }
    }
}
