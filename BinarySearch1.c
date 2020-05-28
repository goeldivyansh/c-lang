#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=10,i,j,x,f=0,l=9,m;
    bool ispresent = false;
    scanf("%d",&x);

    while(f<=l)
    {
        m=(f+l)/2;

        if(x==a[m])
        {
            ispresent = true;
            printf("present");
            break;
        }
        if(x<a[m])
        {
            l=m-1;
        }
        if(x>a[m])
        {
            f=m+1;
        }
    }

    if(ispresent == false)
    {
        printf("Not present");
    }
}
