using System;

class Program{
    static void Main(){
      Console.WriteLine("Enter number: ");
      int number = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Enter operation, product or sum: ");
      string operation = Console.ReadLine();
      int sum = 0;
      if(operation == "sum"){
        sum = number*(number+1)/2;
      }
      if(operation == "product"){
        sum=1;
        for(int i = 2; i <= number; i++){
            sum *= i;
        }
      }
      Console.WriteLine("Result: " + sum); 
    }
}