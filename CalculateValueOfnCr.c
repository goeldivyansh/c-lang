#include<stdio.h>
void main()
{
    long int i,n,r,x, nf=1, nr=1, nx=1,ans;
    printf("Enter value of n = ");
    scanf("%ld",&n);

    printf("Enter value of r = ");
    scanf("%ld",&r);

    x = n-r;

    if(x>=0)
    {
        for(i=1;i<=n;i++)
        {
            nf = nf*i;
        }
        printf("Value of n! is %ld\n",nf);

        for(i=1;i<=r;i++)
        {
            nr = nr*i;
        }
        printf("Value of r! is %ld\n",nr);

        for(i=1;i<=x;i++)
        {
            nx = nx*i;
        }
        printf("Value of x! is %ld\n",nx);

        ans = nf/nr/nx;
        printf("Value is %ld\n\n",ans);
    }
    else
    {
        printf("Not possible");
    }
}
