#include<stdio.h>
void main()
{
    int a[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};
    int i,sum=0;

    for(i=0;i<3;i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of diagnal elements is = %d",sum);
}
