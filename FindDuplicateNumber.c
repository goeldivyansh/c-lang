#include<stdio.h>
void main()
{
    int a[7],n=7,j,i;
    printf("enter seven numbers = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //1 2 3 2 4 5
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("Number is %d",a[i]);
                break;
            }

        }
    }
}
