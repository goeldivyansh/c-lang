#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int checkprime(int n)
{
    int i;
    bool prime = true;
    for(i=2;i<n;i++)
    {
        if(n%i==0 || n<2)
        {
            prime = false;
            break;
        }
    }

    if(prime == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkarmstrong(int n)
{
    int i,j,m,l,count=0;
    m = n;
    l = n;
    while(m>0)
    {
        m = m/10;
        count++;
    }

    int a[count],sum=0,p = 1;

    for(i=0;i<count;i++)
    {
        a[i] = l%10;
        l = l/10;
    }

    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            p = p*a[i];
        }
        sum = sum + p;
        p = 1;
    }

    if(n == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n,x,y;

    printf("Enter any number : ");
    scanf("%d",&n);

    x = checkprime(n);
    y = checkarmstrong(n);\

    if(x==1)
    {
        printf("It is prime number\n");
    }

    if(y==1)
    {
        printf("It is armstrong number\n");
    }
}
