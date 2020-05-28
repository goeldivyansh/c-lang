#include<stdio.h>
void main()
{

float celcius,fahrenheit;

printf("Enter temperature in Fahrenheit = ");
scanf("%f" ,&fahrenheit);

celcius = ((5*fahrenheit/9)-(160.0/9));
printf("Temp in Celcius is %f" , celcius);
}
