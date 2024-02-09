using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_12
{
    public enum MachineType
    {
        In, Out, InAndOut, Canteen
    }

    public class InOutActivity
    {
        public Guid Id { get; set; }
        public string EmployeeCode { get; set; }
        public DateTime Punchtime { get; set; }
        public MachineType PunchType { get; set; }

        public string IPAddress { get; set; }
        public string MachineOrLocationName { get; set; }
        public bool IsProcessed { get; set; }
        public bool IsGarbage { get; set; }
    }

    public class AttendenceData
    {
        public List<InOutActivity> MachinePunchs { get; set; }
        public void Temp() { }

        public void ProcessAttendence(string machineName)
        {

        }

        // Lambda Expression
        for(int i = 0; i < inOutActivities.Count; i++)
        {
            InOutActivity activity = inOutActivities[i];
            var minDate = new DateTime(1900, 1, 1);
            if(activity.Punchtime < minDate)
            activity.IsGarbage = true;
            activity.IsProcessed = true;
        }

        InOutActivity activity = new DateTime(1900, 1, 1);
    //partial class Base
    //{
    //    public int Id { get; set; }
    //    public string Name { get; set; }
    //}

    //partial class Student : Base
    //{
    //    public void Display() 
    //    {
    //        Console.WriteLine(Id);
    //        Console.WriteLine(Name);
    //    }
    //}

    //partial class Student1 : Student
    //{
    //    public Student(int id, string name)
    //    {
    //        Id = id;
    //        Name = name;
    //    }
    //}
}
