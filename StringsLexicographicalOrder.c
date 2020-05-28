#include<stdio.h>
#include<string.h>
void main()
{
    int i = 0,j=0,k=0,l,n = 7;

    char s[7][20] = {"Divyansh goel","Aakash kumar","Dev goel","Harshit singh","Hitesh goel","Devansh kumar","Hitesh tiwari"};
    char str[20];

    printf("GIVEN NAMES : \n");
    for(i=0;i<n;i++)
    {
        puts(s[i]);
        //printf("%s \n",s[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( strlen(s[i]) <= strlen(s[j]) )
            {
                l = strlen(s[i]);
            }
            else
            {
                l = strlen(s[j]);
            }

            for(k=0;k<l;k++)
            {
               if(s[i][k]>s[j][k])
                {
                    strcpy(str,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],str);
                    break;
                }
                else
                if(s[i][k]<s[j][k])
                {
                    break;
                }
            }
        }
    }


    printf("\n\nNAMES IN ALPHABATICAL ORDER : \n");
    for(i=0;i<n;i++)
    {
        printf("%s \n",s[i]);
    }
}
