#include<stdio.h>
void main()
{
    char a[] = "My name is dev.19";
    int i=0,n=0,s=0,j,k;
    puts(a);

    while(a[n]!='\0')
    {
       n++;
    }
    n++;
    char b[n];

    for(i=0;i<=n;i++)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            k = i;
            for(j=s;j<i;j++)
            {
                b[j] = a[k-1];
                k--;
            }
            s = i+1;
            b[i] = ' ';
        }
    }
    b[n] = '\0';
    puts(b);
}
