#include<stdio.h>

void reverse(int n)
{
    if(n>0)
    {
        reverse(n-1);
        printf("%d ",n);
    }

}


void main()
{
    int n = 10;
    reverse(n);
}
