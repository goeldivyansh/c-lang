#include<stdio.h>

union stud
{
    char name[25];
    int id;
    float marks;
};

void main()
{
    union stud s = {"Dev",19,93.8};

    printf("Name : %s \nID : %d \nMarks : %f",s.name,s.id,s.marks);
}

