#include<stdio.h>
void main()
{
    int i,j,n;
    float f,x,sum = 0;

    printf("Enter number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        f = 1;
        for(j=1;j<=i;j++)
        {
            f = f*j;
        }

        x = i/f;

        sum = sum + x;

        printf("%d/%d!",i,i);

        if(i<n)
            printf(" + ");
    }
    printf(" = %f",sum);
}
