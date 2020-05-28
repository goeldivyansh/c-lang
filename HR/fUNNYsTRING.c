#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int q,i,n,j;
    scanf("%d ",&q);
    int ans[q];
    char s[10001];
    char sr[10001];

    for(i=0;i<q;i++)
    {
        ans[i] = 1;
        gets( s);

        n = strlen(s)-1;
        strcpy(sr,strrev(s));

        int a[n],b[n];

        for(j=0;j<n;j++)
        {
            a[j] = abs(s[j] - s[j+1]);
            b[j] = abs(sr[j] - sr[j+1]);
        }

        for(j=0;j<n;j++)
        {
            if(a[j] != b[j])
            {
                ans[i] = 0;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        if(ans[j] == 0)
            printf("Not Funny");
        else
            printf("Funny");
    }
    return 0;
}
