#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of rows = ");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
