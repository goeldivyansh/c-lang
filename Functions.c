#include<stdio.h>

int sub(int x,int y)
{
    int ans = x-y;
    return ans;
}

int multiply(int x,int y)
{
    int ans = x*y;
    return ans;
}


void main()
{
    int ans;
    ans = sub(30,20);
    printf("%d",ans);

    ans = multiply(10,20);
    printf("%d",ans);

    ans = division(20,10);
    printf("%d",ans);
}

int division(int x,int y)
{
    int ans = x/y;
    return ans;
}

