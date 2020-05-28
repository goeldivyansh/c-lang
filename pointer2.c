#include<stdio.h>
void main()
{
    int a[] = {1,3,23,42,43,76};
    int i;

    for(i=0;i<6;i++)
    {
        printf("%d Element of array = %d\n",i,a[i]);
        printf("address of %d element = %u\n\n",i,&a[i]);
    }
}
