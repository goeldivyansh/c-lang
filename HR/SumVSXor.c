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
    long long int i,n,count=0,x,s;

    scanf("%lld",&n);
    for(i=0;i<=n;i++)
    {
        x = i^n;
        s = i+n;
        if(x == s)
            count++;
    }
    printf("%lld",count);
    return 0;
}

