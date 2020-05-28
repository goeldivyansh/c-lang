#include<stdio.h>
void main()
{

    int i,a,b,c,d,e,n ;

    printf("Enter a 5 digit number = ");
    scanf("%d",&i);

    a = i%10;

    i = i/10;
    b = i%10;

    i = i/10;
    c = i%10;

    i = i/10;
    d = i%10;

    i = i/10;
    e = i%10;

    n = (a*10000) + (b*1000) + (c*100) + (d*10) + (e) ;

    printf("Reverse number is = %d",n);

    if(n == i)
        {
        printf("Numbers are equal");
        }
    else
        {
        printf("Numbers are not equal");
        }
}
