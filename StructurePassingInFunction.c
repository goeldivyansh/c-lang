#include<stdio.h>

struct stud
{
    char name[25];
    int id;
    float marks;
};

void display(struct stud s)
{
    printf("Name : %s \nID : %d \nMarks : %f",s.name,s.id,s.marks);
}

void main()
{
    struct stud s1 = {"Dev",19,93.8};
    display(s1);
}
