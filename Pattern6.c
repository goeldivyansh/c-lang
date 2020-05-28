#include<stdio.h>
void main()
{
    int n,i,j,k,l,x,y;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
            {printf(" ");}

        for(k=1;k<=i;k++)
            {
                x=i-k+1;
                printf("%d",x);
            }

        for(l=1;l<=i;l++)
            {
                y=l;
                printf("%d",y);
            }
            printf("\n");
    }
}
