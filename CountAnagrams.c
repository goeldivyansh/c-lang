#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void main()
{
    bool isPresent = true;
    int i=0,j=0;
    char s[100], w[99];

    printf("Enter the string : ");
    gets(s);

    printf("\nEnter the word u have to search for : ");
    gets(w);

    for(i=0;i<100;i++)
    {
        if(w[j] == s[i])
        {
            while(w[j]!='\0')
            {
                if(w[j]!=s[i])
                {
                    isPresent = false;
                    break;
                }
                else
                {
                    isPresent = true;
                }
                j++;
                i++;
            }
        }
    }
    if(isPresent == false)
    {
        printf("Word is NOT PRESENT..");
    }
    else
    {
        printf("\nWord is PRESENT..\n");

        int a[26],l,x,num,numerator=1,denominator=1;
        l = strlen(w);

        for(i=0;i<26;i++)
        {
            a[i] = 0;
        }

        for(i=0;i<l;i++)
        {
            x = w[i] - 97;
            a[x] = a[x] + 1;
        }

        for(i=0;i<26;i++)
        {
            if(a[i]>2)
            {
                for(j=a[i]-1;j>1;j--)
                {
                    a[i] = a[i] *j;
                }
            }
        }

        for(i=0;i<26;i++)
        {
            if(a[i]>1)
            {
                denominator = denominator*a[i];
            }
        }

        for(i=2;i<=l;i++)
        {
            numerator = numerator*i;
        }

        num = numerator/denominator;

        printf("Total number of anagrams are : %d",num);
    }
}
