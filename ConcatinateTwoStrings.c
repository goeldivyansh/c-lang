#include<stdio.h>
void main()
{
    char str1[50] ,str2[50] , str3[100];
    int a=0,b=0,i;

    printf("Enter string 1 = ");
    gets(str1);
    while(str1[a]!='\0')
    {
        a++;
    }
    printf("a = %d\n",a);

    printf("Enter string 2 = ");
    gets(str2);
    while(str2[b]!='\0')
    {
        b++;
    }
    for(i=0;i<a;i++)
    {
        str3[i] = str1[i];
    }
    for(i=a;i<=a+b;i++)
    {
        str3[i] = str2[i-a];
    }

    printf("Concatenated string is : %s",str3);
}
