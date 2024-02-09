using System;
using System.CodeDom;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Lab_6
{

    class Student
    {
        public string Fname, Sname;
        public Student()
        {

        }

        public Student(string fname, string sname)
        {
            Fname = fname;
            Sname = sname;
        }
    }


    class One
    {
        //public string Fname, Lname;

        // Binary operator overloading
        //public static One operator + (One left, One right)
        //{
        //    One obj = new One();
        //    obj.Fname = left.Fname + right.Fname;
        //    obj.Lname = left.Lname + right.Lname;
        //    return obj;
        //}


        // UNARY Operator Overloading 
        //public static Three operator +(One left, Two right)
        //{
        //    Three obj = new Three();
        //    obj.Sname = left.Fname + " " + right.Lname;
        //    return obj;
        //}



        // UNARY Operator Overloading 
        //public int Age;
        //public static One operator ++(One a)
        //{
        //    One one = new One();
        //    one.Age = ++a.Age;
        //    return one;
        //}


        List<Student> students = new List<Student>();
        public Student this[int index]
        {
            get
            {
                return students[index];
            }
            set
            {
                students.Insert(index, value);
            }
        }

        public void Display()
        {
            for (int i = 0; i < students.Count; i++)
            {
                Student student = students[i];
                Console.WriteLine("{0} {1}",student.Fname,student.Sname);
                Console.WriteLine();
            }
        }
    }

    //class Two
    //{
    //    public string Lname;

    //}

    //class Three
    //{
    //    public string Sname;

    //}
}
