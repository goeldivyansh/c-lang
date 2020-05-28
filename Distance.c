#include<stdio.h>
void main()
{
    float km,m,feet,inches,cm;

    printf("Distance in Km is ");
    scanf("%f",&km);

    m = km*1000;
    printf("Distance in meters is %f \n",m);

    feet = km*3280.84;
    printf("Distance in feet is %f \n",feet);

    inches = km*39370.079;
    printf("Distance in inches is %f \n",inches);

    cm = km*100000;
    printf("Distance in centimeters is %f \n",cm);

}
