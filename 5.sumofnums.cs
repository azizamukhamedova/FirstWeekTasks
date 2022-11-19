using System;

class Program{
    static void Main(){
      Console.WriteLine("Enter number: ");
      int number = Convert.ToInt32(Console.ReadLine());
      int sum = 0;
        for(int i = 1; i <= number; i++){ 
         if(i%5==0 || i%3 == 0){
            sum = sum + i; 
         }
      } 
      Console.WriteLine("Result: " + sum); 
    }
}