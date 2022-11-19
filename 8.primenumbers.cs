using System;

class Program{
    static void Main(){
      Console.WriteLine("All prime numbers between 1 to 100 are:");
      int start = 2;
      int end = 100;
      int a = 0;

      for(int i = start; i<=end; i++){
        for (int index = 1; index <= i; index++) {
            if (i % index == 0) {
               a++;
            }
         }
         if (a == 2) {
            Console.WriteLine(i);
         }
         a = 0;
      }
    }
}