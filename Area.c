#include<stdio.h>
void main()
{
    float l,b,r,rp,ra,cc,ca;

    printf("Enter length of Rectangle = ");
    scanf("%f",&l);

    printf("Enter breadth of Rectangle = ");
    scanf("%f",&b);

    printf("Enter radius of Circle = ");
    scanf("%f",&r);

    rp = 2*l+2*b;
    printf("Perimeter of rectangle is = %f \n" ,rp);

    ra = l*b;
    printf("Area of rectangle is = %f \n" ,ra);

    cc = 2*22*r/7;
    printf("Circumference of circle is = %f \n" ,cc);

    ca = 22*r*r/7;
    printf("Area of circle is = %f \n" ,ca);
}
