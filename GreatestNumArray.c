#include<stdio.h>
void main()
{
    int i,k,n =10,j[10];

    printf("Enter array of 10 numbers = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }
    int max=j[0];
    printf("Greatest number is = ");
    for(k=1;k<n;k++)
    {
        if(j[k]>max)
        {
            max=j[k];
        }
    }
    printf("%d",max);
}
