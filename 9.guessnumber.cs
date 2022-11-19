using System;

class Program{
    static void Main(){
      Random rd = new Random();
      int randomnumber = rd.Next(1,100);
      int number = 0;
      bool correct = false;
      while(!correct){
        Console.WriteLine("Guess number: ");
        number = Convert.ToInt32(Console.ReadLine()); 
        if(number>randomnumber){
          Console.WriteLine("Large"); 
        }
        else if(number<randomnumber){
          Console.WriteLine("Small"); 
        }
        else {
          correct=true;
          Console.WriteLine("You found correct number!"); 
        }
      }
    }
}