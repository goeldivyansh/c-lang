#include<stdio.h>
void main()
{
    int i,n,a;
    int j[5];

    printf("Enter 5 digit number = ");
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        a=n%10;
        j[i]=a;
        n=n/10;
    }

    for(i=0;i<5;i++)
    {
    if(j[i]==0)
    {
        printf("");
    }
    else
    {
    printf("%d",j[i]);
    }
    }


        /*while(n>0)
    {
        n=n%10;
        count = n;
        printf("%d",j[i])
    }*/
}
