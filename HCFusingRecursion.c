#include<stdio.h>

int hcf(int a, int b ,int c)
{
    if(c%a==0 && b%a==0)
    {
        return a;
    }
    else
    {
        hcf(a-1,b,c);
    }
}
void main()
{
    int a,b,c;
    c = a;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("hcf is : %d",hcf(a,b,c));
}
