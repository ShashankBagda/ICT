using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Lab_12
{
    internal class Program
    {
        static void Main(string[] args)
        {
            AttendenceData data = new AttendenceData();

            // if i need to call method with 0 parameter then Threadstart

            var threadstart = new ThreadStart(data.Temp);

            // if i need to call method with 1 paramter then parameterizedThreadstart is used and parameter type must be object type only.
            var paramThreadStart = new ParameterizedThreadStart(data.ProcessAttendence);

            Thread thread1 = new Thread(paramThreadStart);
            thread1.Start("Machine1");

            Thread thread2 = new Thread(paramThreadStart);
            thread2.Start("Machine2");

            Thread thread3 = new Thread(paramThreadStart);
            thread3.Start("Machine3");
        }
    }
}
