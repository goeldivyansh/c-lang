#include<stdio.h>
void main()
{
    int i,n,x;
    printf("Enter the number of which the table you want : ");
    scanf("%d",&n);

    x = n;

    for(i=1;i<=10;i++)
    {
        x = n*i;

        printf("%d * %d = %d\n" , n,i,x);
    }
}
