#include<stdio.h>
#include<stdlib.h>

int power(int a,int n)
{
    int f = 1,i;
    for(i=1;i<=n;i++)
    {
        f = f*a;
    }
    return f;
}
int checkPalindrome(int x)
{
    int t,n=0,y=0,d,i;
    t = x;

    while(t >0)
    {
        t = t/10;
        n++;
    }
    //printf("n:%d  ",n);
    t = x;

    for(i=n-1;i>=0;i--)
    {
        d = t%10;
      //  printf(" %d ",d);
        if(i!=0)
        {
            d = d*power(10,i);
        }
      //  printf(" %d ",d);
        y = y+d;
        t = t/10;
    }

  //  printf("x:%d y:%d\n\n",x,y);

    if(x==y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
   // printf("%d",checkPalindrome(13231));
    int x,t;

    int next,prev;

    printf("Enter the number : ");
    scanf("%d",&x);
    t = x;

   /* if(checkPalindrome(x) == 1)
    {
        printf("Number is itself a palindrome..");
        exit(0);
    }*/

    while(1)
    {
        t++;
        if(checkPalindrome(t) == 1)
        {
            next = t;
            break;
        }
    }
    while(1)
    {
        t--;
        if(checkPalindrome(t) == 1)
        {
            prev = t;
            break;
        }
    }

    printf("prev %d \nnext %d\n",prev,next);

    if(next-x < x-prev)
    {
        printf("Nearest palindrome no : %d",next);
    }
    else
    {
        printf("Nearest palindrome no : %d",prev);
    }
}
