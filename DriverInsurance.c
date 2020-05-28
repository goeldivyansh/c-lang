#include<stdio.h>
void main()
{
    char ms,g;
    int age;

    printf("Martial status ");
    scanf("%c",&ms);

    printf("Gender ");
    scanf("%c",&g);

    printf("\nage ");
    scanf("%d",&age);

    if(ms == "m")
    {
        printf("INSURED");
    }
    else

        if(ms == "un" && g == "male" && age>30)
        {
            printf("INSURED");
        }
    else
        if(ms == "un" && g == "female" && age>25)
        {
            printf("INSURED");
        }
        else {printf("UNINSURED");}
}
