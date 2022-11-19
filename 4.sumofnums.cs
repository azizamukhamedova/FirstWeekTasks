using System;

class Program{
    static void Main(){
      Console.WriteLine("Enter number: ");
      int number = Convert.ToInt32(Console.ReadLine());
      int sum = number*(number+1)/2;
      Console.WriteLine("Result: " + sum); 
    }
}