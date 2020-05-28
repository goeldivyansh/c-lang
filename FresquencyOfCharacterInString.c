#include<stdio.h>
void main()
{
    char str[] = "What is it like in your Funny little brains? it must be so boring!";
    int i=0,f=0;
    char x;

    printf("Enter the character of which frequency is to be find = ");
    scanf("%c",&x);

    while(str[i]!='\0')
    {
        if(x==str[i])
        {
            f = f+1;
        }
        i++;
    }
    printf("Frequency is = %d",f);
}
