#include<stdio.h>
void main()
{

float bs,hra,da,gs;

    printf("Enter Basic Salary = ");
    scanf("%f",&bs);

    if(bs<1500)
    {
        hra = 0.1*bs;
        da = 0.9*bs;
    }
        else
    {
            hra = 500;
            da = .98*bs;
    }


gs = bs+hra+da;
printf("Gross Salary is %f",gs);
}
