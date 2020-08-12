#include<stdio.h>
void main()
{
    int a[] = {1,2,3,4,2,1};
    int n=6,k=7;
    int i,j,sum,l;

    for(i=0;i<n;i++)
    {
        sum = a[i];
        l=1;
        for(j=i+1;i<n;j++)
        {
            if(sum == k)
            {
                printf("Smallest length : %d",l);
                exit(0);
            }
            sum = sum + a[j];
            l++;
        }
    }
}
