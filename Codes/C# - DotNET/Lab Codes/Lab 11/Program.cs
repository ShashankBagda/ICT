using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_11
{
    class Imposter : Exception  // Custom Exception
    {
        public Imposter() { }
        public Imposter(string message) : base(message) { }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            int i, j;

            try
            {
                i = 5;
                j = i / 0;
                Console.WriteLine("Try Block Executed");
            }
            catch (DivideByZeroException e) 
            {
                //Console.WriteLine(e.Message);
                Console.WriteLine(e.ToString());
                Console.WriteLine(e.StackTrace);
                Console.WriteLine("Divide by Zero Block");
            }
            catch 
            {
                Console.WriteLine("Catch Block");                
            }
        }
    }
}
 // F9 to add or remove debug points
 // F10 to jump to next statement and execute it
 // F11 to jump into function for detailed debug