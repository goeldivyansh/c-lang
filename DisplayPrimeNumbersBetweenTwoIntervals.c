#include<stdio.h>
#include<stdbool.h>
void main()
{
    int i,a,b,j;
    bool prime = true;

    printf("Enter the starting number : ");
    scanf("%d",&a);

    printf("Enter the ending number : ");
    scanf("%d",&b);

    printf("Prime numbers are : ");

    for(i=a+1;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime = false;
                break;
            }
        }
        if(prime == true)
        {
            printf("%d ",i);
        }
        prime = true;
    }
}
