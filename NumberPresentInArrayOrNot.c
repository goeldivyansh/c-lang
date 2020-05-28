#include<stdio.h>
#include<stdbool.h>
void main()
{
    int i,n;
    int j[10];
    bool ispresent=false;

    printf("Enter array numbers \n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&j[i]);
    }
    printf("Enter Number to check weather present or not = ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(j[i]==n)
        {
            printf("Number is present");
            ispresent = true;
        }
    }
    if(ispresent==false)
    {
        printf("Not present");
    }
}
