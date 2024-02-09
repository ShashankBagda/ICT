using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Lab_8
{
    //class Student
    //{
    //    public int Id { get; set; }
    //    public string Name { get; set; }
    //    public bool IsActive { get; set; }
    //}
    //class One
    //{
    //    public List<Student> students = new List<Student>();

    //    // Wrapper Method
    //    public void AddStudent(int id,  string name, bool isActive)
    //    {
    //        students.Add(new Student()
    //        {
    //            Id = id,
    //            Name = name,
    //            IsActive = isActive
    //        });
    //    }

    //    public void AddStudent(int id, string name)
    //    {
    //        AddStudent(id, name, true);
    //    }

    //    public void AddStudent(string name)
    //    {
    //        var id = students.Count + 1;
    //        AddStudent(id, name);
    //    }
    //}




    class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public bool IsActive { get; set; }

        public static int StudentCount { get; set; }

        public Student() { }

        public Student(int id, string name, bool isActive)
        {
            Id = id;
            Name = name;
            IsActive = isActive;
        }

        public void Display()
        {
            Console.WriteLine("Id : " + Id);
            Console.WriteLine("Name : " + Name);
            Console.WriteLine("IsActive : " + IsActive);
            Console.WriteLine();
        }

        public static void disp(Student student)
        {
            Console.WriteLine("Id : " + student.Id);
            Console.WriteLine("Name : " + student.Name);
            Console.WriteLine("IsActive : " + student.IsActive);
            Console.WriteLine("StudentCount : " + StudentCount);
            Console.WriteLine();

        }
    }

    class One
    {

    }
}
