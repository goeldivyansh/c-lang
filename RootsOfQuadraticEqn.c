#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x,y,p;
    printf("Enter the coeffecient of x^2 : ");
    scanf("%f", &a);
    printf("\nEnter the coeffecient of x : ");
    scanf("%f", &b);
    printf("\nEnter the constant term : ");
    scanf("%f", &c);

    d = (b*b - 4*a*c);
    if(d>=0)
    {
        p = pow(d,0.5);
        x = (-b + p)/2/a;
        y = (-b - p)/2/a;

        if(x==y)
        {
            printf("Roots are equal\n");
        }
        else
        {
            printf("Roots are real and distinct\n");
        }
        printf("Root1 : %f \n",x);
        printf("Root2 : %f \n",y);
    }
    else
    {
        printf("Roots are imaginary \n");
    }
}
