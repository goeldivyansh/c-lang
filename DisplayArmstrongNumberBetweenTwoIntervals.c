#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,i,j,k,a,b,count=0,p=1,sum =0;

    printf("Enter the starting number = ");
    scanf("%d", &x);

    printf("Enter the ending number = ");
    scanf("%d", &y);

    printf("Armstrong numbers are : ");

    for(i=x+1;i<y;i++)
    {
        a = i;
        b = i;

        while(a>0)
        {
            a = a/10;
            count++;
        }

        int arr[count];
      // printf("b = %d\n",b);
      // printf("count = %d\n",count);

        for(j=count-1;j>=0;j--)
        {
            if(b>9)
            {
                arr[j] = b%10;
            }
            else
            {
                arr[j] = b;
            }
            b = b/10;

            for(k=0;k<count;k++)
            {
                p = p*arr[j];
            }

            sum = sum + p;
            p=1;
        }

        if(i == sum)
        {
            printf("%d  ",i);
        }
        count = 0;
        sum = 0;
    }
}
