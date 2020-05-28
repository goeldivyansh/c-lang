#include<stdio.h>
int greatest(int a,int b,int c)
{
  /*  if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }*/

    if(a>b&&b>c)
    {
        return a;
    }
    else
    {
        return c;
    }

    if(b>a&&a>c)
    {
        return b;
    }
    else
    {
        return c;
    }

    if(c>a&&a>b)
    {
        return c;
    }
    else
    {
        return b;
    }
}

void main()
{
    printf("enter any 3 numbers = ");
    int a,b,c,g;
    scanf("%d %d %d",&a,&b,&c);
    g = greatest(a,b,c);
    printf("Greatest number is %d",g);
}








