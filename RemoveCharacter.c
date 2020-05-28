#include<stdio.h>
void main()
{
    char str[1000];
    int i=0,j,k,x,n=0;

    gets(str);

    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length is %d\n",i);

    for(j=0;j<i;j++)
    {
        x = str[j];
        if( x>0 && x<65 || x>90 && x<97 || x>122 )
        {
            for(k=j;k<i;k++)
            {
            str[k] = str[k+1];
            }
            j--;
        }
    }
    printf("New string is : ");
    puts(str);

    while(str[n]!='\0')
    {
        n++;
    }
    printf("\nNew length is %d\n",n);
}



