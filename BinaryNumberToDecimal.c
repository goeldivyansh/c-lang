#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=0,m,p,r,sum;

    printf("Enter a binary number = ");
    scanf("%d",&n);

    m = n;

    //010101110

    while(m>0)
    {
        r = m%10;
        p = r*pow(2,i);
        sum = sum +p;
        m = m/10;
        i++;
    }

    printf("\nNumber is %d",sum);
}
