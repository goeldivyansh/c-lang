#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {

    int i,x,s = 0;
    va_list lst;
    va_start(lst,count);
    for(i=0;i<count;i++)
    {
        x = va_arg(lst,int);
        s = s + x;
    }
    va_end(lst);
    return s;
}

int min(int count,...) {

    int i,x,ans;
    va_list lst;
    va_start(lst,count);
    ans = va_arg(lst,int);
    for(i=1;i<count;i++)
    {
        x = va_arg(lst,int);
        if(x < ans) ans = x;
    }
    va_end(lst);
    return ans;
}

int max(int count,...) {

    int i,x,ans;
    va_list lst;
    va_start(lst,count);
    ans = va_arg(lst,int);
    for(i=1;i<count;i++)
    {
        x = va_arg(lst,int);
        if(x > ans) ans = x;
    }
    va_end(lst);
    return ans;
}

void main()
{
    printf("%d",sum(5,1,2,3,4,5));
}
