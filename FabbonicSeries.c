#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of terms you want in fabonaacci series = ");
    scanf("%d",&n);
    int i,a[n];

    a[0] = a[1] = 1;

    for(i=2;i<n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
