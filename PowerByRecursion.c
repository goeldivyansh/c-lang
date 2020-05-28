#include<stdio.h>

int power(int a , int n)
{
    int p;
    if(n==0)
    {return 1;}

    p = a*power(a,n-1);
    return p;
}
void main()
{
    int a,n,ans;
    printf("Enter the base number : ");
    scanf("%d",&a);

    printf("Enter the power : ");
    scanf("%d",&n);

    ans = power(a,n);
    printf("%d",ans);
}
