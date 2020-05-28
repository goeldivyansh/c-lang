#include <stdio.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];

    printf("Enter Ch = ");
    scanf("%c",&ch);

    printf("Enter s = ");
    gets(s);

    printf("\nEnter sen = ");
    gets(sen);

    printf("%c\n",ch);
    puts(s);
    puts(sen);

    return 0;
}

