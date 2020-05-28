#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a[7] = {1,2,3,2,4,5,6};
    int i,j;
    bool is = true;

    for(i=0;i<7;i++)
    {
       for(j=0;j<7;j++)
       {
           if(i!=j)
           {
                if(a[i]==a[j])
                {
                    is = false;
                    break;
                }
           }
       }
       if(is == true)
       {
           printf("%d",a[i]);
       }
       else
       {
           is = true;
       }
    }
}

