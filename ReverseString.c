#include<stdio.h>
void main()
{
    char s[100];
    int l = 0,i,j;
    printf("Enter string : ");
    gets(s);
    while(s[l]!='\0')
    {
        l++;
    }

    char r[l+1];

    for(i=0,j=l-1 ; i<l,j>=0 ; i++,j--)
    {
        r[i] = s[j];
    }
    r[l] = s[l];
    printf("Reverse string : ");
    puts(r);
}
