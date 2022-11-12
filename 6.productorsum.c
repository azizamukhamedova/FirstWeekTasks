#include<stdio.h>  
#include <string.h>

int main()  
{
    int number;  
    char operation[40];  
    
    printf("Enter Number : "); 
    scanf("%d",&number);  
    printf("Enter operation, product or sum: "); 
    scanf("%s",&operation);

   int sum=0;
    
    if(strcmp(operation,"sum")==0){
        for(int i = 1; i <= number; i++){ 
            sum = sum + i; 
        } 
    }
    if(strcmp(operation,"product")==0){
        sum=1;
        for(int i = 2; i <= number; i++){
            sum *= i;
        }
    }

   printf("Result: %d", sum);  
}