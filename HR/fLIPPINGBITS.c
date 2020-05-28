
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int power(int x,int y)
{
    if(y==0)
        return 1;
    else {
        int i;
        long long p=1;
        for(i=0;i<y;i++)
            p = p*x;
        return p;
    }
}

int main()
{
    int i,j,t;
    scanf("%d",&t);
    int b[32];
    long long int x,a[t],c[t];

    for(i=0;i<t;i++)
    {
        c[i] = 0;
        scanf("%lld",&a[i]);
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
            else {
                b[j] = 0;
            }
           // printf(" %d ",b[j]);
           printf(" %d ",b[j]);
            c[i] = c[i] + b[j]*pow(2,(31-j));
        }
    }

    for(i=0;i<t;i++)
    {
        printf("%lld\n",c[i]);
    }
    return 0;
}


