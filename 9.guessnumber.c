#include<stdio.h>  
#include<stdlib.h>
#include<stdbool.h>

int main()  
{
  int randomnumber = rand();
  int number;  
  bool correct = false;
  while(!correct){
    printf("Guess number: "); 
    scanf("%d",&number);  
    if(number>randomnumber){
      printf("Large\n"); 
    }
    else if(number<randomnumber){
      printf("Small\n"); 
    }
    else {
      correct=true;
      printf("You found correct number!"); 
    }
  }

}