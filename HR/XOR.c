#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int l,r,i,j,t,x;

    scanf("%d %d",&l,&r);
    x = 0;

    for(i=l;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            t = i^j;
            if(t > x)
            {
                x = t;
            }
            printf("%d ",x);
        }
    }
    printf("\nx = %d",x);
    return 0;
}
