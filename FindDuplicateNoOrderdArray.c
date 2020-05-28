#include<stdio.h>
void main()
{
    int a[7],n=7,i;
    printf("enter seven numbers = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            printf("Duplicate number is %d",a[i]);
        }
    }
}
