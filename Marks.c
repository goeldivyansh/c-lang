#include<stdio.h>
void main()
{
float phy,chem,maths,eng,ip,agmarks,percentage;

printf("Enter marks of physics = ");
scanf("%f",&phy);

printf("Enter marks of chemistry = ");
scanf("%f",&chem);

printf("Enter marks of maths = ");
scanf("%f",&maths);

printf("Enter marks of english = ");
scanf("%f",&eng);

printf("Enter marks of informatic practices = ");
scanf("%f",&ip);

agmarks = phy+chem+maths+eng+ip;
printf("Agregate marks is %f",agmarks);

percentage = agmarks/500;
printf("Percentage is %f",percentage) ;

}
