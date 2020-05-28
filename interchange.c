#include<stdio.h>
void main()
{
    float A,B,C;

    printf("Enter value of A = ");
    scanf("%f",&A);

    printf("Enter value of B = ");
    scanf("%f",&B);

    C = A;
    A = B;
    B = C;


    printf("New value of A = %f" ,A);
    printf("New value of B = %f" ,B);
}
