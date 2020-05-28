#include<stdio.h>
#include<stdbool.h>
void main()
{
    int i,n;
    bool isprime = true;
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
           if(n%i==0)
           {
               isprime = false;
             //  printf("%d",i);
               break;
           }
    }
    if(isprime == true)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}
