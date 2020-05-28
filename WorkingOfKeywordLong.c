#include<stdio.h>
void main()
{
    int a;
    long int b;
    long long c;
    long long int d;

    double e;
    long double f;
    long long g;

    printf("Size of int a= %ld\n",sizeof(a));
    printf("Size of long int b = %ld\n",sizeof(b));
    printf("Size of long long c = %ld\n",sizeof(c));
    printf("Size of long long int d = %ld\n",sizeof(d));

    printf("Size of double e = %ld\n",sizeof(e));
    printf("Size of long double f = %ld\n",sizeof(f));
    printf("Size of long long g = %ld\n",sizeof(g));
}
