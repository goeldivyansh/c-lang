#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,y,count=0,sum = 0,i,p=1,k;

    printf("Enter the number = ");
    scanf("%d", &n);

    x = n;
    y = n;

    while(x>0)
    {
        x = x/10;
        count++;
    }

    int a[count];

    for(i=count-1;i>=0;i--)
    {
        a[i] =  y%10;
        y = y/10;

       // p = pow(a[i],count);
       for(k=0;k<count;k++)
       {
           p = p*a[i];
       }

        printf("p is %d \n",p);

        sum = sum + p;
        printf("sum is %d \n\n",sum);
        p=1;
    }
   // printf("%d ",sum);

    if(n == sum )
    {
        printf("It is a Armstrong number. ");
    }
    else
    {
        printf("Not a Armstrong number.");
    }
}
