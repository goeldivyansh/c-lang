#include<stdio.h>
void main()
{
    int c,n,t=21;

    while(t>0)
    {
        printf("Total number of matchsticks : %d",t);

        printf("\nEnter number of matchsticks to be picked(1-4) : ");
        scanf("%d",&n);

        if(t==1 && n==1)
        {
            printf("COMPUTER WINS!!!!");
            break;
        }

        c = 5-n;
        printf("Number of matchsticks picked by computer : %d",c);

        t = t-n-c;
        printf("\nTotal number of remaining matchsticks : %d\n\n",t);
    }
}
