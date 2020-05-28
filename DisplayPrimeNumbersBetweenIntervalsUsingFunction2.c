#include<stdio.h>
#include<stdbool.h>

int checkprime(int a)
{
    int i;
    bool prime = true;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            prime = false;
            return 0;
            break;
        }
    }
    if(prime == true)
    {
        return a;
    }
}

void main()
{
    int p,a,b,i;
    printf("Enter Two numbers a and b : ");
    scanf("%d%d",&a,&b);

    for(i=a+1;i<b;i++)
    {
        p = checkprime(i);

        if(p>1)
        printf("%d ",p);
    }
}
