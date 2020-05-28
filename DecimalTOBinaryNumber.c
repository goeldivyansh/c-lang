#include<stdio.h>
void main()
{
    int n,x,y,count=0,i;
    printf("Enter any number : ");
    scanf("%d",&n);

    x = n;
    y = n;

    while(x>0)
    {
        x = x/2;
        count++;
    }
    int a[count];

    for(i=count-1;i>=0;i--)
    {
        if(y == 1 || y == 0)
        {
            a[i] = y;
        }
        else
        {
            a[i] = y%2;
        }
        y = y/2;
    }
    for(i=0;i<count;i++)
    {
        printf("%d",a[i]);
    }
}
