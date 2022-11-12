#include<stdio.h>  
int main()  
{
  int number;  
  printf("Enter Number : "); 
  scanf("%d",&number);  
  int sum = number*(number+1)/2;
  printf("Result: %d", sum);  
}