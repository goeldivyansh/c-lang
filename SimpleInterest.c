#include<stdio.h>
#include<conio.h>
void main()
{
 float simpleInterest,principle,rate,time;
    printf("Enter value of Principle Amount \n");
    printf("Enter value of Rate of Interest \n");
    printf("Enter duration of Time \n");

     scanf("%f %f %f",&principle,&rate,&time);

     simpleInterest = principle*rate*time/100;

     printf("Simple Interest is %f" ,simpleInterest);

}

