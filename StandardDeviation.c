#include<stdio.h>
#include<math.h>
void main()
{
    int i,n = 10;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    float mean=0,sd=0,x;

    for(i=0;i<n;i++)
    {
        mean = mean + a[i];
    }

    mean = mean/n;
  //  printf("\nMean is = %f",mean);

    for(i=0;i<n;i++)
    {
        x = a[i]-mean;
        sd = sd + pow(x,2);
    }

    sd = sd/n;
    sd = pow(sd,0.5);

    printf("\nMean is = %f",mean);
    printf("\nStandard Deviation is = %f",sd);
}

