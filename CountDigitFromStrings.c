#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int l=0,i, a[10] = {0,0,0,0,0,0,0,0,0,0};
    char num[1000];
    gets(num);

    while(num[l]!='\0')
    {
        l++;
    }

    for(i=0;i<=l;i++)
    {
        if(num[i]=='0')
        {
            a[0]++;
        }
        else
        if(num[i]=='1')
        {
            a[1]++;
        }
        else
        if(num[i]=='2')
        {
            a[2]++;
        }
        else
        if(num[i]=='3')
        {
            a[3]++;
        }
        else
        if(num[i]=='4')
        {
            a[4]++;
        }
        else
        if(num[i]=='5')
        {
            a[5]++;
        }
        else
        if(num[i]=='6')
        {
            a[6]++;
        }
        else
        if(num[i]=='7')
        {
            a[7]++;
        }
        else
        if(num[i]=='8')
        {
            a[8]++;
        }
        else
        if(num[i]=='9')
        {
            a[9]++;
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
