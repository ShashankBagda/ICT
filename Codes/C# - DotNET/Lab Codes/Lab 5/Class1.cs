using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_5
{
    internal class One
    {
        enum Semseters
        {
            Sem1, Sem3, Sem5, Sem7
        }
        class Student
        {
            public string Name;
            public int RollNo;
            public Semseters semester;
        }
        class Faculty
        {
            public string Name;
            public Semseters semester;
        }
        class One
        {
            Student[] students;
            public void SetStudentsCount(int count)
            {
                students = new Student[count];
            }

            public void AddStudent(string name, int roll, Semseters sem, int index)
            {
                //option-1 recommended
                students[index] = new Student
                {
                    RollNo = roll,
                    Name = name,
                    semester = sem
                };
                //option-2
                //Student student = new student();
                //student.Name = name;
                //Student.RollNo = roll;
                //Student.semester = sem;
                //Student[index] = Student;
            }
            public void DisplayStudent(Faculty faculty)
            {
                if (faculty != null)
                {
                    for (int i = 0; i < students.Length; i++)
                    {
                        Student student = students[i];
                        //indirect data abstraction logic
                        //opt - 1 redommended 
                        if (student.semester != faculty.semester) continue;

                        //indirect data abstraction logic
                        //opt - 2
                        {
                            Console.WriteLine("Student Roll - {0}", student.RollNo);
                            Console.WriteLine("Student Roll - {0}", student.RollNo);
                            Console.WriteLine("Student Roll - {0}", student.RollNo);
                            Console.WriteLine();
                        }
                    }
                }
            }
        }
    }
}