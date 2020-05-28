#include<stdio.h>
void main()
{
    int n,i;
    int j[10];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",j[i]);
    }
    getch();
}
