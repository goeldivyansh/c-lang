#include<stdio.h>
#include<string.h>
void main()
{
    int a,b,i,l;
    printf("String is = ");
    char name[] = "Working with strings is fun";
    puts(name);

    l = strlen(name);
    printf("Length of string = %d\n",l);

    printf("Enter the position from which string is to be extracted = ");
    scanf("%d",&a);

    printf("Enter the length of string which is to be extracted = ");
    scanf("%d",&b);

    if(b==0)
    {
        for(i=a-1;i<l;i++)
        {
            printf("%c",name[i]);
        }
    }
    else
    {
        for(i=a-1;i<=a+b-2;i++)
        {
            printf("%c",name[i]);
        }
    }
}
