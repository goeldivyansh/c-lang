#include<stdio.h>
void main()
{
    char c;

    printf("Enter any alphabet : ");
    scanf("%c",&c);

    if(c>=97 && c<=122)
    {
        printf("Letter is small.");
    }
    else
    if(c>=65 && c<=90)
    {
        printf("Letter is capital.");
    }
}
