#include<stdio.h>
void main()
{
    int a[4] = {4,7,10,15};
    int b[4] = {5,8,10,12};
    int c[8];

    int i=0,s1=0,s2=0,j;

    while( s1<4 && s2<4 )
    {
        if(a[s1]<b[s2])
        {
            c[i] = a[s1];
            s1++;
        }
        else if(a[s1]>b[s2])
        {
            c[i] = b[s2];
            s2++;
        }
        else if(a[s1]==b[s2])
        {
            c[i] = a[s1];
            i++;
            c[i] = a[s1];
            s1++;
            s2++;
        }
        i++;
    }

    while(s1<4)
    {
        c[i] = a[s1];
        s1++;
        i++;
    }

    while(s2<4)
    {
        c[i] = b[s2];
        s2++;
        i++;
    }
    for(j=0;j<8;j++)
    {
        printf("%d ",c[j]);
    }
}
