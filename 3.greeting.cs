using System;

class Program{
    static void Main(){
      Console.WriteLine("Enter your name:");
      string userName = Console.ReadLine();
      if(userName == "Bob" || userName == "Alice"){
        Console.WriteLine("Hello, " + userName); 
      } else {
        Console.WriteLine("Hello");
      }
    }
}