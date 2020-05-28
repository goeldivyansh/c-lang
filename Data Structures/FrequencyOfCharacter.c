#include<stdio.h>

void main()
{
    char s[100];
    int a[26];
    int n = 26,l,ind,i;

    printf("Enter String : ");
    gets(s);

    for(i=0;i<n;i++)
    {
        a[i] = 0;
    }
    i = 0;
    while(s[i] != '\0')
    {
        ind = s[i] - 97;
        a[ind]++;
        i++;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n\n\n\n");
    for(i=0;i<n;i++)
    {
        if(a[i] != 0)
        {
            printf("(%c,%d)  ",i+97,a[i]);
        }
    }

}
