#include<stdio.h>
void main()
{
    char str[] = "Divyansh goel 19@#$^";
    char vow[50] , con[50] , dig[50] , ws[50];
    int i=0,v=0,d=0,w=0,c=0,n;

    puts(str);

    while(str[i] != '\0')
    {
        n = str[i];

        if( n==97 || n==101 || n==105 || n==111 || n==117 || n==65 || n==69 || n==73 || n==79 || n==85)
        {
            vow[v] = str[i];
            v++;
        }
        else
        if( n>=48 && n<=57)
        {
            dig[d] = str[i];
            d++;
        }
        else
        if(n>=65 && n<=90 || n>=97 && n<=122)
        {
            con[c] = str[i];
            c++;
        }
        else
        {
            ws[w] = str[i];
            w++;
        }
        i++;
    }

    vow[v] = '\0';
    dig[d] = '\0';
    con[c] = '\0';
    ws[w] = '\0';

    printf("vowels are : ");
    puts(vow);

    printf("digits are : ");
    puts(dig);

    printf("Consonants are : ");
    puts(con);

    printf("white spaces are : ");
    puts(ws);
}
