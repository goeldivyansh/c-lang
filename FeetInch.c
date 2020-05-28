#include<stdio.h>
void main()
{
    struct dist
    {
        int feet;
        int inches;
    } d1 , d2, sum;


    printf("Enter first distance in feets and inches : ");

    scanf("%d %d",&d1.feet,&d1.inches);

    printf("Enter second distance in feets and inches : ");

    scanf("%d %d",&d2.feet,&d2.inches);

    sum.feet = d1.feet + d2.feet;

    sum.inches = d1.inches + d2.inches;

    if(sum.inches >= 12)
    {
        sum.inches = 12%sum.inches;
        printf("\ninches sum = %d\n",sum.inches);
        sum.feet++;
    }

    printf("sum is : %d'' %d'",sum.feet,sum.inches);

}
