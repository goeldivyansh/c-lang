#include<stdio.h>
void main()
{

float a,b,c,d,e,per;
    printf("Enter Marks in 5 subjects = ");
    scanf("%f %f %f %f %f ",&a,&b,&c,&d,&e);

    per = (a+b+c+d+e)/5;

    if (per >= 60)
    {
      printf("First Division");
    }
        else

    if (per >= 50)
    {
    printf("Second Division");;
    }
        else

        if (per >= 40)
     {

        printf("Third Division");
     }

        else
      {
        printf("Fail");
      }
}
