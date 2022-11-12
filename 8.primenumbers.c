#include <stdio.h>

int main()
{
    int start = 2;
    int end = 100;
    int i, j;
    int isPrime;

    printf("All prime numbers between 1 to 100 are:\n");

    for(i=start; i<=end; i++){
        isPrime = 1; 
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}