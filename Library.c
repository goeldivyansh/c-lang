#include<stdio.h>

struct library
{
    int accessnum;
    char title[50];
    char author[50];
    int price;
    int flag;
};

void main()
{
    printf("Various options are :- \n1. Add book information \n2. Display book Information \n3. List all books of given author \n4. List the title of specified book \n5. List the count of books present in library \n6. List the books in order of accession number \n7. Exit\n");

}
