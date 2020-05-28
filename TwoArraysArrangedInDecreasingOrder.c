#include<stdio.h>
void main()
{
    int a[4] = {10,15,27,40};
    int b[4] = {8,15,28,80};
    int c[8];
    int s1=3,s2=3,i=0,j;

    while(s1>=0&&s2>=0)
    {
        if(a[s1]>b[s2])
        {
            c[i]=a[s1];
            s1--;
        }
        else
        if(b[s2]>a[s1])
        {
            c[i]=b[s2];
            s2--;
        }
        else
        if(a[s1]==b[s2])
        {
            c[i]=a[s1];
            i++;
            c[i]=a[s1];
            s1--;
            s2--;
        }
        i++;
    }

    while(s1>=0)
    {
        c[i]=a[s1];
        s1--;
        i++;
    }

    while(s2>=0)
    {
        c[i]=b[s2];
        s2--;
        i++;
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
}
