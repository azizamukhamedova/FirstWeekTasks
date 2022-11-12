#include<stdio.h>  
int main()  
{
  int number;  
  printf("Enter Multiplication : "); 
  scanf("%d",&number);  
  int sum;
  if(number>12){
      number=12;
  }
  for(int i = 1; i <= number; i++){ 
    printf("*****************************\n");
    for(int num = 1; num <= 10; num++){ 
        printf("%d x %d = %d\n", i, num, i*num);
    } 
    printf("*****************************\n");
  } 
  printf("Result: %d", sum);  
}