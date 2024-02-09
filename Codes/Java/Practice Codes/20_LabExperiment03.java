/*
Lab Experiment - 03
Shashank Bagda
*/

// (A) Represent Abstract Class

abstract class A
{
   abstract void run();
}

// (B) Implement Interface using extends

class B extends A
{
   void run()
   {
      System.out.println("Lab Experiment 03");
   }

   public static void main(String args[])
   {
      A obj = new B();
      obj.run();
   }
}