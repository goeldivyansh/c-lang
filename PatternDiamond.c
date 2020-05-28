#include<stdio.h>
void main()
{
    int n,i,j,k,p,q,r;
    printf("Enter number of rows of Diamond pattern = ");
    scanf("%d",&n);

    for(i=1;i<=n/2+1;i++)
    {
        for(j=n/2-i+1;j>0;j--)
            {printf(" ");}

        for(k=1;k<=i;k++)
            {printf("* ");}
        printf("\n");
    }

    for(p=1;p<=n/2;p++)
    {
        for(q=1;q<=p;q++)
            {printf(" ");}

        for(r=n/2-p+1;r>0;r--)
            {printf("* ");}
        printf("\n");
    }
}
