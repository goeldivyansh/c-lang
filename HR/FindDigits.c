
#include<stdio.h>
int main()
{
    int i,x,t,n,y,m,count;
    scanf("%d",&t);
    int ar[t];
    for(i=0;i<t;i++)
    {
        count = 0;
        scanf("%d",&n);
        m = n;
        while(m>0)
        {
            x = m%10;
            y = m%x;
            if(y == 0)
                count++;
            m = m/10;
        }
        ar[i] = count;
    }

    for(i=0;i<t;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}

