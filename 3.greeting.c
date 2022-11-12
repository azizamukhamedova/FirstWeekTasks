#include<stdio.h>  
#include <string.h>

int main()  
{
  char name[40];  
  printf("Enter Your Name : "); 
  scanf("%s",&name);  
  if(strcmp(name,"Bob") == 0 || strcmp(name,"Alice") == 0){
    printf("Hello, %s", name);  
  } else {
    printf("Hello");
  }
}