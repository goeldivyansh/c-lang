#include<stdio.h>
#include<conio.h>
void main()
{
float basicSalary, dearnessAll, houseRentAll, grossSalary;

printf("Enter Basic Salary");
scanf("%f" , &basicSalary);

dearnessAll = 0.4*basicSalary;
printf("Dearness Allowance is %f \n" , dearnessAll);

houseRentAll = 0.2*basicSalary;
printf("House Rent is %f \n" , houseRentAll);

grossSalary = basicSalary+dearnessAll+houseRentAll;
printf("Gross Salary is %f" ,grossSalary);

}
