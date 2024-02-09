using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Lab_7
{
    //class Student
    //{
    //    public readonly string RegistrationKey = "qwertyuiop";
    //    public string Fname, Sname;

    //    public string FullName
    //    {
    //        get { return Fname + " " + Sname; }
    //    }
    //    public Student()
    //    {

    //    }

    //    public Student(string fname, string sname)
    //    {
    //        Fname = fname;
    //        Sname = sname;
    //    }
    //}

    //partial class Student
    //{
    //    public void SetValues(string Fname, string Sname)
    //    {
    //        this.Fname = Fname;
    //        this.Sname = Sname;
    //    }

    //}





    //interface Base1
    //{
    //    string Fname { get; set; }
    //    void setName (string name);
    //}

    //interface Base2
    //{
    //    string Lname { get; set; }
    //    void setName (string name);
    //}

    //interface Base3
    //{
    //    void Display();
    //}

    //sealed class Student : Base1, Base2, Base3
    //{
    //    public string Fname { get; set; }
    //    public string Lname { get; set; }

    //    public void setName(string name)
    //    {
    //        Fname  = name;
    //    }
    //    public void setLname(string name)
    //    {
    //        Lname = name;
    //    }
    //    public void Display()
    //    {
    //        Console.WriteLine("{0} {1}",Fname, Lname);
    //    }
    //}





    abstract class Student
    {
        string Fname { get; set; }
        string Lname { get; set; }

        public abstract void setName(string name);
        public abstract void setLname(string name);
    }



    interface IStudent
    {
        string Fname { get; set; }
        string LName { get; set; }

        void 

    }

    class Student : IStudent
    {
        public void setname(string name)
        {
            Fname = name;
        }

        public void setLname(string name)
        {
            Lname = name;
        }
        public void Display()
        {
            Console.WriteLine("{0} {1}", Fname, Lname);
        }

    }

    class Demo
    {
        public void DisplayObj(IStudent s1)
        {
            if (s1 != null)
            {
                s1.Display();
            }
        }
    }
}