#include<stdio.h>
#include<stdbool.h>
void main()
{
    char a[] = "My name is dev";
    int i=0,n=0,j=0;
    bool ispresent = false;

    while(a[n]!='\0')
    {
       n++;
    }
    //n++;
    //printf("%d",n);
    char b[n];

    printf("Given String is : ");
    puts(a);
    printf("Enter the word you have to search : ");
    gets(b);

    while(a[i] != '\0')
    {
        j=0;
        if(b[j] == a[i])
        {
            while(b[j] != '\0')
            {
                if(b[j] == a[i])

                {
                    printf("%c  %c\n",b[j],a[i]);
                    j++;
                    i++;
                    ispresent = true;
                }
                else
                {
                    ispresent = false;
                    break;
                }
            }
        }
        i++;
    }

    if(ispresent == true)
    {
        printf("\nPresent");
    }
    else
    {
        printf("\nNot Present");
    }
}
