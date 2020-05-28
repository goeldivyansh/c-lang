#include<stdio.h>
#include<stdbool.h>

int numbers(int a, int b)
{
    int i,j,count = 0,c;
    bool prime = true;

    printf("Prime numbers are = ");
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime = false;
                break;
            }
        }
        if(i<2)
        {
            prime = false;
        }

        if(prime == true)
        {
            printf("%d  ",i);
        }

        prime = true;
    }
}

void main()
{
    int a,b,i,n;
    printf("Enter the starting number : ");
    scanf("%d" ,&a);

    printf("Enter the ending number : ");
    scanf("%d" ,&b);

    numbers(a,b);
}
