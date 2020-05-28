#include<stdio.h>
#include<stdbool.h>
void main()

{
    bool anagram = true;
    int count1 = 0, count2 = 0,i;
    char str1[] = "ababababab";
    char str2[100];
    int freq1[26], freq2[26];

    for(i=0;i<26;i++)
    {
        freq1[i] = 0;
        freq2[i] = 0;
    }

    while(str1[count1]!='\0')
    {
        count1++;
    }

    printf("Enter the string : ");
    gets(str2);

    while(str1[count2]!='\0')
    {
        count2++;
    }

    int a[count1] , b[count1],x;

    if(count1 == count2)
    {
        for(i=0;i<count1;i++)
        {
            a[i] = str1[i];
            x = a[i] - 97;
            freq1[x]++;

            b[i] = str2[i];
            x = b[i] - 97;
            freq2[x]++;

        }

        for(i=0;i<26;i++)
        {
            if(freq1[i] == freq2[i])
            {
                anagram == true;
            }
            else
            {
                anagram = false;
                printf("Strings are not anagram.");
                break;
            }
        }

        if(anagram == true)
        {
            printf("Strings are anagram");
        }
    }
    else
    {
        anagram = false;
        printf("Strings are not anagram.");
    }
}
