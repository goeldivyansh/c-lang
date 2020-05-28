#include<stdio.h>
#include<stdbool.h>
void main()
{
    int i,j,n,x,y,z,count = 0;
    bool pald = false;

    printf("Enter the number : ");
    scanf("%d",&n);

    x = n;
    y = n;
    z = n;

    while(x!=0)
    {
        x = x/10;
        count++;
    }

    int a[count], b[count];

    for(i=count-1;i>=0;i--)
    {
        a[i] = y%10;
        y = y/10;
    }

    for(i=0;i<count;i++)
    {
        b[i] = z%10;
        z = z/10;
    }

    /*for(i=0;i<count;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<count;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");*/
    for(i=0;i<count;i++)
    {
        if(a[i] == b[i])
        {
            pald = true;
        }
        else
        {
            pald = false;
            break;
        }
    }

    if(pald == true)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}
