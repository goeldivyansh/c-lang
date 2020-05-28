/*#include <stdio.h>
#define get(x) #x
int main()
{
    printf(get(vignesh));
    return 0;
}*/

#include<stdio.h>
void main()
{
  //  char a = '5';

    //int b = 5;

    //printf("%d",b+(int)(a-'0'));
int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==1)
            {
                break;
            }
            printf(" world ");
        }
        printf("hello\n");
    }
}
