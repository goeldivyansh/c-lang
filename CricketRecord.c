#include<stdio.h>
#include<string.h>

struct cricket
{
    char name[20];
    int age;
    float avgruns;
}c[20];

struct crick
{
    char name[20];
    int age;
    float avgruns;
}c1[20];

void main()
{
    int i,j,n = 4;
    for(i=0;i<n;i++)
    {
        printf("Enter name, age, avruns : ");
        scanf("%s %d %f",&c[i].name,&c[i].age,&c[i].avgruns);
    }

    for(i=0;i<n;i++)
    {
        strcpy(c1[i].name,c[i].name);
        c1[i].age = c[i].age;
        c1[i].avgruns = c[i].avgruns;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(c1[i].avgruns > c[j].avgruns)
            {
                strcpy(c1[i].name,c[i].name);
                c1[i].age = c[j].age;
                c1[i].avgruns = c[j].avgruns;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("Name : %s  age : %d  Average runs : %f\n",c1[i].name,c1[i].age,c1[i].avgruns);
    }
}
