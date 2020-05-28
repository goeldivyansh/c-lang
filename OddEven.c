#include<stdio.h>
void main()
{

    int i;

    scanf("%d",&i);

    i=i%2;
    if(i == 0)
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is odd number");
    }


}
