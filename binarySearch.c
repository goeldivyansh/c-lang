#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a[10],n=10,x,j,z,i;
    bool ispresent = false;
    printf("enter ten numbers in inc or dec order= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number x which is to be find = ");
    scanf("%d",&x);

    z = a[n/2];

    for(j=1;j<n;j++)
    {
        if(x<z)
        {
            z=a[(n-j)/2];
        }
        else if(x>z)
        {
            z=a[(n+j)/2];
        }
        else if(x=z)
        {
            printf("Number is present");
            bool ispresent = true;
            break;
        }
    }
    if(ispresent==false)
    {
        printf("Number is not present");
    }
}
