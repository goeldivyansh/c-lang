#include<stdio.h>
#include<math.h>

int fact(int n)
{
    int i,f=1;
    for(i=n;i>1;i--)
    {
        f = f*i;
    }
    return f;

}
void main()
{
    int n,sum = 0,pro = 1,i,j,x,y,a,b,c;
    n = 10;
    int arr[12] = {1,2,3,5,4,7,6,8,6,9,10,9};

    for(i=0;i<n+2;i++)
    {
        sum = sum + arr[i];
        pro = pro * arr[i];
    }

    a = sum - n*(n+1)/2;
    //x+y = a;
    //x*y = pro/fact(n);
    c = pro/fact(n);

    b = pow((a*a-4*c),0.5);
    //x-y = b;

    x = (a+b)/2;
    y = (a-b)/2;


    printf("\n\na,b,c : %d  %d  %d",a,b,c);
    printf("\n\nMissing element : %d , %d",x,y);

    /*for(i=0;i<n+1;i++)
    {
        for(j=i+1;j<n+2;j++)
        {
            if(a[i] == a[j])
            {
                printf("%d  ",a[i]);
            }
        }
        //printf("%d  ",a[i]);
        //sum = sum + a[i];
    }*/
}
