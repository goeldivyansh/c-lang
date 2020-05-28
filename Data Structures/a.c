#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>

int main() {

    int i,j,t;
    scanf("%d",&t);

    char s[t][1000];
    for(i=0;i<t;i++)
    {
        scanf("  %s",&s[i]);
        //gets(s[i]);
    }
   // for(i=0;i<t;i++)

    //    printf("%s\n",s[i]);

    for(i=0;i<t;i++)
    {
        j = 0;
        while(s[i][j]!='\0')
        {
            if(j%2 == 0)
                printf("%c",s[i][j]);
                j++;
        }
        printf(" ");
        j=0;
        while(s[i][j]!='\0')
        {
            if(j%2 == 1)
                printf("%c",s[i][j]);
                j++;
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
