using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            One one = new One();
            Two two = new Two();

            one.SetValues();
            //one.Setvalues("Test",5);
            one.Display();
            Console.ReadKey();
        }
    }
}
