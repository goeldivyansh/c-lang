#include<stdio.h>
void main()
{
    int a,b,c,d,e,n,s;

    printf("Enter a 5 digit number = ");
    scanf("%d",&n);

    a = n%10;
    a = a+1;
    a = a%10;

    n = n/10;
    b = n%10;
    b = b+1;
    b = b%10;

    n = n/10;
    c = n%10;
    c = c+1;
    c = c%10;

    n = n/10;
    d = n%10;
    d = d+1;
    d = d%10;

    n = n/10;
    e = n%10;
    e = e+1;
    e = e%10;

    s = a+b*10+c*100+d*1000+e*10000;

    printf("New number = %d" ,s);
}
