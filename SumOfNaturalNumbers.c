#include<stdio.h>
void main()
{
    int n,sum;
    printf("Enter number of terms : ");
    scanf("%d",&n);

    sum = n*(n+1)/2;

    printf("Sum is %d",sum);
}
