#include<stdio.h>
void main()
{
    int s1=0,s2=0,i;
    int a[10] = {12,32,343,43,45,321,46,34,232,909};
    int b[10];
    int c[10];

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            b[s1]=a[i];
            s1++;
        }
        else
        {
            c[s2]=a[i];
            s2++;
        }
    }
    for(i=0;i<s1;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0;i<s2;i++)
    {
        printf("%d ",c[i]);
    }
}
