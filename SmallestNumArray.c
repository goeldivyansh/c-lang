#include<stdio.h>
void main()
{
    int i,k,min,n=10,j[10];

    printf("Enter array of size 10 = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }
    min = j[0];

    printf("Smallest number is = ");

    for(k=1;k<n;k++)
    {
        if(j[k]<min)
        {
            min=j[k];
        }
    }
        printf("%d",min);
}
