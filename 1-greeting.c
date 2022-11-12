// #include <stdio.h>

// int main(void)
// {
//     char[40] name = get_string("What is your name?\n");
//     printf("Hello,%s\n", name);
// }

#include<stdio.h>  
int main()  
{
  char name[40];  
  printf("Enter Your Name : "); 
  scanf("%s",&name);  
  printf("Hello, %s", name);  
}