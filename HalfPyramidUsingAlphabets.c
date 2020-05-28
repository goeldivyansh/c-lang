#include<stdio.h>
void main()
{
    int i,j,n;
    char a,b,c;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        a = i+65;
        for(j=0;j<=i;j++)
        {

            printf("%c ",i+65);
        }
        printf("\n");
    }
}
