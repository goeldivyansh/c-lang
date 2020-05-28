#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int power(int x,int y)
{
    if(y==0)
        return 1;
    else {
        int i,p=1;
        for(i=0;i<y;i++)
            p = p*x;
        return p;
    }
}
/*
int main()
{
    int i,j,t,n;
int k;
    long int x;
    scanf("%d",&t);
    int b[32];
    long int a[t],c[t];

    for(i=0;i<t;i++)
    {
    //    c[i] = 0;
        scanf("%ld",&a[i]);

        for(j=0;j<32;j++)
            b[j] = 0;

        x = a[i];
        j = 31;
        while(x != 0)
        {
            b[j] = x%2;
            j--;
            x = x/2;
        }

        for(j=0;j<32;j++)
        {
            if(b[j] == 0)
                b[j] = 1;
            else
            if(b[j] == 1)
                b[j] = 0;
        }
        printf("\nbinry : ");
        for(j=0;j<32;j++)
            printf("%d ",b[j]);
            printf("\n");

        x = 0;
        for(j=31;j>=0;j--)
        {
            x = x + b[j]*power(2,31-j);
        }
        printf("x = %ld ",x);
        c[i] = x;
    }

    for(i=0;i<t;i++)
    {
        printf("%ld\n",c[i]);
    }
    return 0;
}*/

int main()
{
    int i,j,b[32];
    long int x = 2147483648;
    int y=5;

    for(i=0;i<32;i++)
            b[i] = 0;

    j = 31;
    while(x != 0)
    {
        b[j] = x%2;
        j--;
        x = x/2;
    }
    for(i=0;i<32;i++)
    {
            if(b[i] == 0)
                b[i] = 1;
            else
            if(b[i] == 1)
                b[i] = 0;
    }

    //printf("power of  : %d   ",power(2,10));
    for(i=0;i<32;i++)
        printf("%d ",b[i]);

        x=0;
        for(j=0;j<32;j++)
        {
        //    x = x + b[j]*(2^(31-j));
            x = x + b[j]*power(2,(31-j));
        }
        printf("new x = %ld ",x);


}

