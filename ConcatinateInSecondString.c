#include<stdio.h>
void main()
{
    char a[50];
    char b[50];
    int i=0,j=0,k;

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

    b[i+j] = '\0';

    for(k=i+j-1;k>=i;k--)
    {
        b[k] = b[j-1];
        j--;
    }

    for(k=0;k<i;k++)
    {
        b[k] = a[k];
    }
    puts(b);
}
