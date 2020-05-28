#include<stdio.h>
void main()
{
    char str[100] ;

    printf("Enter String : ");
    gets(str);

    int i=0,v=0,d=0,w=0,c=0,n;

    while(str[i]!='\0')
    {
        n = str[i];
        if( n==97 || n==101 || n==105 || n==111 || n==117 || n==65 || n==69 || n==73 || n==79 || n==85)
        {
            v = v+1;
        }
        else
        if( n>=48 && n<=57)
        {
            d = d+1;
        }
        else
        if(n>=65 && n<=90 || n>=97 && n<=122)
        {
            c = c+1;
        }
        else
        {
            w = w+1;
        }

        i++;
    }

    printf("Number of vowels = %d\n",v);
    printf("Number of digits = %d\n",d);
    printf("Number of white spaces = %d\n",w);
    printf("Number of consonants = %d\n",c);
}
