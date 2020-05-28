#include<stdio.h>
void main()
{
    char a[] = "divyansh goel";
    char k;
    int i=0,n,j=0;

    while(a[i]!='\0')
    {
        i++;
    }
    i++;
    n = i;

    for(j=0;j<n/2;j++)
    {
        k = a[j];
        a[j] = a[i-2];
        a[i-2] = k;
        i--;
    }

    printf("New string is %s",a);
}
