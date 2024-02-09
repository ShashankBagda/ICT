using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_9
{
    interface IBase
    {
        void Intro();
    }
    class Faculty : IBase
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public decimal Experience { get; set; }

        public void Intro() 
        {
            Console.WriteLine("I'm {0} with {1} years of experience",Name,Experience);

        }
    }
    class Student : IBase
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string sem { get; set; }

        public bool IsActive { get; set; }

        public string MyProperty 
        { 
            get
            {
                return string.Format("Myself {0} student of semester {1}", Name, sem);

            } 
        }
        public void Intro()
        {
            Console.WriteLine("Myself {0} student of semester {1}",Name,sem);
        }
    }


    static class Extensions
    {
        public static int ToInteger(this object val)
        {
            int i;
            int.TryParse(val.ToString(), out i);
            return i;
        }
    }

    public static bool ToBoolean(this object val)
    {
        string s = val.ToString().ToLower();
        switch(s)
        {
            case "yes":
            case "y":
            case "true":
            case "on":
            case "t":
                return true;
            default:
                return false;
        }
    }
}
