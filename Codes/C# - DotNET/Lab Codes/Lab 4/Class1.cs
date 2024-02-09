using System;

namespace Test
{
    class One
    {
        protected string Name;
        protected int Age;
    }

    class Two : One
    {
        public void SetValues(string name, int age)
        {
            Name = name;
            Age = age;
        }
    }

    class Three : One
    {
        public void SetValues()
        {
            Name = "Shashank";
            Age = 19;
        }
    }

    class Four : Three
    {
        public void Display()
        {
            Console.WriteLine("Name - " + Name);
            Console.WriteLine("Age - " + Age);
        }
    }
}
