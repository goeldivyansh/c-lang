#include<stdio.h>
void main()
{
    int i,a,b,c,d,e,num;

    printf("Enter any 5 digit number = ");
    scanf("%d",&i);

    a = i%10;

    i=i/10;
    b=i%10;

    i=i/10;
    c=i%10;

    i=i/10;
    d=i%10;

    i=i/10;
    e=i%10;

    a = a*10000;
    b = b*1000;
    c = c*100;
    d = d*10;
    e = e*1;

    num = a+b+c+d+e;
    printf("Reversed number is %d" ,num);
}
