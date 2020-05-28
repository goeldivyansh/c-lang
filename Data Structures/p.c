#include<stdio.h>

void main()
{
    int days,y=0,w=0,d=0;

    scanf("%d",&days);

    while(days>=365)
    {
        days = days - 365;
        y++;
    }

    while(days>=7)
    {
        days = days - 7;
        w++;
    }

    d = days;

    printf("\n%d %d %d",y,w,d);
}





   /* a = x%10;
    x = x/10;

    b = x%10;
    x = x/10;

    c = x%10;
    sum = a+b+c;
    //y = ((d+1)%10)*1000 + ((c+1)%10)*100 + ((b+1)%10)*10 + (a+1)%10;
*/
