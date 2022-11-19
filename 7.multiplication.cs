using System;

class Program{
    static void Main(){
      Console.WriteLine("Enter number: ");
      int number = Convert.ToInt32(Console.ReadLine());
      int sum = 0;
      if(number>12){
        number=12;
      }
      for(int i = 1; i <= number; i++){ 
        Console.WriteLine("*****************************");
        for(int num = 1; num <= 10; num++){ 
            Console.WriteLine($"{i} x {num} = {i*num}");
        } 
        Console.WriteLine("*****************************");
      } 
      Console.WriteLine($"Result: {sum}"); 
    }
}