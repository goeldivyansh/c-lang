#include<stdio.h>
void main()
{
int i,sum;

printf("Enter any five digit number = ");
scanf("%d",&i);

sum = i%10;
//a=i%10;
i=i/10;

sum=sum+i%10;
i=i/10;

sum=sum+i%10;
i=i/10;

sum=sum+i%10;
i=i/10;

sum=sum+i%10;

printf("Sum of digits is = %d" ,sum);
}

