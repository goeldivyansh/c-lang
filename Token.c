#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int i=0;
    char s[1000];

    gets(s);

    while(s[i]!='\0')
    {
        if(s[i] == 32)
        {
            printf("a\n");
        }
        else{

        printf("%c",s[i]);
        }
        i++;
    }
}
