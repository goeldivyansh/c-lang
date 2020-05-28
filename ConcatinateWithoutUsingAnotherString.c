#include<stdio.h>
void main()
{
    char a[50];
    char b[50];
    int x=0,i=0,j=0,k;

    printf("enter first string : ");
    gets(a);

    printf("enter second string : ");
    gets(b);

    while(a[i] != '\0')
    {
        i++;
    }
    while(b[j] != '\0')
    {
        j++;
    }
    j++;

    for(k=i;k<i+j;k++)
    {
        a[k] = b[x];
        x++;
    }

    puts(a);
}
