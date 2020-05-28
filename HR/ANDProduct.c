#include<stdio.h>
int main()
{
    int n;
     long int a,b,i,j,x;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%ld%ld",&a,&b);
      //  x=a;
        //for(j=a+1;j<=b;j++)
         //   a = a&j;

         for(i=1; i<b-a ; i=2*i)
         {
            x = a&(a+i);
            if(i==64) break;
         }
         //x = a&(a+1)&(a+2)&(a+4)&(a+8)&(a+16)&(a+32)&(a+64)...&b
         x = x&b;

        printf("%d\n",x);
    }
    //for(i=0;i<n;i++)
        //printf("%lld\n",ar[i]);
    return 0;
}
