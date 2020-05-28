#include<stdio.h>
void main()
{
    char name[] = "Divyansh";
    int i = 0;
    while(name[i] != '\0')
    {
        printf("%c",name[i]);
        i++;
    }
}
