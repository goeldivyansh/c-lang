#include<stdio.h>

struct bank
{
    int accnum;
    char name[20];
    float balance;
}b[10];

void main()
{
    int n = 2,i,w,an,bal = 1;
    float amt;
    for(i=0;i<n;i++)
    {
        printf("Enter account number , name , balance : ");
        scanf("%d%s%f",&b[i].accnum,&b[i].name,&b[i].balance);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(b[i].balance < 100)
        {
            printf("Account number : %d, Name : %s \n",b[i].accnum,b[i].name);
        }
    }

    printf("Enter 1 to withdraw \nEnter 2 to deposit\n");
    scanf("%d",&w);
    printf("\n");

    if(w==1)
    {
        printf("Enter account number from which you have to withdraw money : ");
        scanf("%d",&an);

        printf("Enter amount : ");
        scanf("%f",&amt);


        for(i=0;i<n;i++)
        {
            if(an == b[i].accnum)
            {
                if(b[i].balance >= amt)
                {
                    b[i].balance = b[i].balance - amt;
                }
                else
                {
                    bal = 0;
                    printf("Insufficient balance..");
                }

            }
        }
    }
    else
    if(w==2)
    {
        printf("Enter account number in which you have to deposit amount : ");
        scanf("%d",&an);

        printf("Enter amount : ");
        scanf("%d",&amt);


        for(i=0;i<n;i++)
        {
            if(an == b[i].accnum)
            {
                b[i].balance = b[i].balance + amt;
            }
        }
    }
  //  printf(" %d ",bal);

    //if(b==1)
    //{

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Account number : %d,  Name : %s,  New Balance : %f  \n",b[i].accnum,b[i].name,b[i].balance);
    }
    //}


}
