#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,c;

    printf("Enter the number of terms = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d  ",c);
    }
}

