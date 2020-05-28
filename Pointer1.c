#include<stdio.h>
void main()
{
    int a[] = {1,3,5,7,43};
    int *j,*k;

    j=&a[2];
    k=a+2;

    printf("%d\n",j);
    printf("%d",k);

    if(j==k)
    {
        printf("\nequal");
    }
    else
    {
        printf("not equal");
    }
}
