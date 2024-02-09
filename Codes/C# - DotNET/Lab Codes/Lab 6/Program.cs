using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //BINARY Operator Overloading
            //One left = new One();
            //One right = new One();
            //One up;

            //left.Fname = "SHA";
            //right.Fname = "SHANK";
            //left.Lname = "BA";
            //right.Lname = "GDA";

            //up = left + right;
            //Console.WriteLine("{0} {1}", up.Fname, up.Lname);




            //UNARY Operator Overloading
            //One left = new One();
            //Two right = new Two();
            //Three up;

            //left.Fname = "SHASHANK";
            //right.Lname = "BAGDA";

            //up = left + right;
            //Console.WriteLine("{0}", up.Sname);



            //UNARY Operator Overloading
            //One a = new One();
            //a.Age = 1;
            //a++;
            //Console.WriteLine("{0}", a.Age);




            One a = new One();
            a[0] = new Student("Shashank", "Bagda");
            a[1] = new Student("Shashank", "Bagda");
            a.Display();

        }
    }
}
