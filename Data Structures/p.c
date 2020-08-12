#include<stdio.h>

void main()
{
    int a = 10;
    void *p;
    int *pi;
    pi = &a;
  //  p = pi;
    printf("%d\n",p);
    printf("%d\n",pi+1);
    printf("%d\n",*pi+1);
    printf("%d",*pi);

}
