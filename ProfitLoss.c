#include<stdio.h>
void main()
{
float cp,sp,i;
printf("Cost price = ");
scanf("%f" , &cp);

printf("selling price = ");
scanf("%f" , &sp);

i = sp-cp;

if(i>0)
{
    printf("Profit is made");
    printf("Profit is %f" ,i);
}
else
    if(i<0)
{
    printf("Loss incurred");
    printf("Loss is %f" ,i);
}
else
{
    printf("No Profit No Loss");
}

}
