#include<stdio.h>
void main()
{
    char x,y;
    int i,j,n=7;

    for(i=n;i>0;i--)
    {
        x = 'A';
        for(j=1;j<=i;j++)
        {
            if(j<n)
            {
                printf("%c",x);
                x++;
            }

        }

        for(j=0;j<2(n-i)-1;j++)
        {
            printf(" ");
        }

        for(j=i;j>0;j--)
        {
            y = 'A' + j-1;
            printf("%c",y);
            y--;
        }
        printf("\n");
    }
}
