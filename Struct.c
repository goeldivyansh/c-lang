#include<stdio.h>

struct stud
{
    int rollnumber;
    char name[20];
    int yoj;
}s[6];

void main()
{
    int i,y;
    struct stud s[0] = {1,"abc",2015};
    struct stud s[1] = {2,"bve",2013};
    struct stud s[2] = {3,"cve",2018};
    struct stud s[3] = {4,"dve",2018};
    struct stud s[4] = {5,"eve",2016};
    struct stud s[5] = {6,"fvf",2018};

    printf("Enter year : ");
    scanf("%d",&y);

    for(i=0;i<6;i++)
    {
        if(y==s[i].yoj)
        {
            printf("%s",s[i].name);
        }
    }

}


