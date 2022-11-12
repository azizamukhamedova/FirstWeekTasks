#include<stdio.h>  
int main()  
{
  int number;  
  printf("Enter Number : "); 
  scanf("%d",&number);  
  int sum;
  for(int i = 1; i <= number; i++){ 
      if(i%5==0 || i%3 == 0){
		sum = sum + i; 
      }
   } 
  printf("Result: %d", sum);  
}