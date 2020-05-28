#include<stdio.h>
void main()
{
    char c,a[13] = "hiteshgoel";
    int freq[26],i,n=11,x,y=0;
    int b[n];

    for(i=0;i<26;i++)
    {
        freq[i] = 0;
    }

    printf("a[] is : ");
    for(i=0;i<n;i++)
    {
        printf("%c  ",a[i]);
    }

    printf("\nb[] is : ");
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
        x = b[i] - 97;
        freq[x]++;
        printf("%d  ",b[i]);
    }

    printf("\nfreq[] is : ");

    for(i=0;i<26;i++)
    {
        printf("%d ",freq[i]);
    }

    printf("\n\nfrequency is : ");
    for(i=0;i<26;i++)
    {
        if(freq[i]>0)
        {
            c = i + 97 ;
            printf("%c%d  ",c,freq[i]);
        }
    }
}
