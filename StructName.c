#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k,n=3,l=0,d,x;
    char str[50];
    struct stu
    {
        int id;
        char name[50];
    }s[5];

    for(i=0;i<n;i++)
    {   printf("Enter student id : ");
        scanf("%d",&s[i].id);

        printf("Enter student name : ");
        scanf("%s",&s[i].name);
    }

    printf("Want to display data in order according to \n1. Id\n2. Name\n");
    scanf("%d",&d);

    if(d==1)
    {
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].id>s[j].id)
            {
                x = s[i].id;
                strcpy(str,s[i].name);

                s[i].id = s[j].id;
                strcpy(s[i].name,s[j].name);

                s[j].id = x;
                strcpy(s[j].name,str);
                //break;
            }
            //else
            //if(s[i].id < s[j].id)
            //{
              //  break;
            //}
        }
    }
    }
    else
    if(d==2)
    {
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(s[i].name)<strlen(s[j].name))
            {
                l = strlen(s[i].name);
            }
            else
            {
                l = strlen(s[j].name);
            }

            for(k=0;k<l;k++)
            {
                if(s[i].name[k]>s[j].name[k])
                {
                    strcpy(str,s[i].name);
                    x = s[i].id;

                    strcpy(s[i].name,s[j].name);
                    s[i].id = s[j].id;

                    strcpy(s[j].name,str);
                    s[j].id = x;
                    break;
                }
                else
                if(s[i].name[k]<s[j].name[k])
                {
                    break;
                }
            }
        }
    }
    }

    for(i=0;i<n;i++)
    {   printf("student id : %d",s[i].id);

        printf(" Student name : %s\n",s[i].name);
    }


}
