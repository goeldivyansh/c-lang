#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=10,i=0,j,x,m,f=0,l=9;
    bool p = false;

    printf("Enter the number you have to search for = ");
    scanf("%d",&x);

    m=(f+l)/2;

    while(i<n)
    {
       if(x==a[m])
       {
           p = true;
           break;
       }
       if(x>a[m])
       {
          m = (m+l)/2;
       }
       else
       {
          m = (f+m)/2;
       }
       i++;
    }

    if(p == true)
    {
        printf("present");
    }
    else
    {
        printf("Not present");
    }
}
