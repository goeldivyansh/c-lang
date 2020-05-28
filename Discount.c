#include<stdio.h>
void main()
{
    float qty,pr,disc,exp;

    printf("Enter quantity = ");
    scanf("%f",&qty);

    printf("Enter price of 1 item = ");
    scanf("%f",&pr);

    if(qty>1000)
    {
        disc = 0.1*qty*pr;
    }
    else
    {disc = 0;}

    exp = qty*pr-disc;

    printf("Total expense is %f" , exp);

}
