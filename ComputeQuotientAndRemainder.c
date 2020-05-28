#include<stdio.h>
#include<math.h>
void main()
{
    float n,d,r,q;
   // int q;

    printf("Enter the number which is to divided : ");
    scanf("%f",&n);

    printf("Enter the divisor : ");
    scanf("%f",&d);

    q = n/d;
    r = fmod(n,d);

    printf("Quotient is %f",q);
    printf("\nRemainder is %f",r);














}
