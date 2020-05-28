#include<stdio.h>
#include<stdbool.h>

int a[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

void input()
{
    int x,i,j;
    printf("Enter number : ");
    scanf("%d",&x);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x==a[i][j])
            {
                a[i][j] = 'O';
                break;
            }
        }
        if(a[i][j] == 'O')
        break;
    }
}

void print()
{
    int i,j;
    static int s =0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] == 79 || a[i][j] == 88)
            {
                printf(" %c ",a[i][j]);
            }

            else
            {
                if(s==0)
                {
                    printf(" %d ",a[i][j]);
                }
                else
                {
                    printf("   ");
                }
            }

            if(j<2)
                printf(" | ");
        }
        printf("\n");

        if(i<2)
        printf("---------------");

        printf("\n");
    }
    s++;
}

int equal()
{
    bool draw = true;
    if(a[0][0]=='O'&& a[0][1]=='O'&& a[0][2]=='O' || a[1][0]=='O'&& a[1][1]=='O'&& a[1][2]=='O' || a[2][0]=='O'&& a[2][1]=='O'&& a[2][2]=='O' || a[0][0]=='O'&& a[1][0]=='O'&& a[2][0]=='O' || a[0][1]=='O'&& a[1][1]=='O'&& a[2][1]=='O' || a[0][2]=='O'&& a[1][2]=='O'&& a[2][2]=='O' || a[0][0]=='O'&& a[1][1]=='O'&& a[2][2]=='O' || a[0][2]=='O'&& a[1][1]=='O'&& a[2][0]=='O')
    {
        printf("Player Wins!!!");
        draw = false;
        return 1;
    }
    else
    if(a[0][0]=='X'&& a[0][1]=='X'&& a[0][2]=='X' || a[1][0]=='X'&& a[1][1]=='X'&& a[1][2]=='X' || a[2][0]=='X'&& a[2][1]=='X'&& a[2][2]=='X' || a[0][0]=='X'&& a[1][0]=='X'&& a[2][0]=='X' || a[0][1]=='X'&& a[1][1]=='X'&& a[2][1]=='X' || a[0][2]=='X'&& a[1][2]=='X'&& a[2][2]=='X' || a[0][0]=='X'&& a[1][1]=='X'&& a[2][2]=='X' || a[0][2]=='X'&& a[1][1]=='X'&& a[2][0]=='X')
    {
        printf("CPU wins!!!");
        draw = false;
        return 1;
    }
    else
    if(draw==true)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j] != '0' || a[i][j] != 'X')
                {
                    draw = false;
                    break;
                }
            }
        }
    }
    if(draw==true)
    {
        printf("Match draws!!");
        return 1;
    }
    else
    {
        return 0;
    }

}

int tonotloose()
{
    int x = 0,i;

    if(a[1][1]=='O')
        {a[0][0] = 'X';}
    else
        {a[1][1] = 'X';}

    for(i=0;i<3;i++)
    {
        if(a[i][0] =='O' && a[i][1] == 'O')
        {
            a[i][2] = 'X';
            x=1;
        }

        if(a[0][i] == 'O' && a[1][i] == 'O')
        {
            a[2][i] = 'X';
            x=1;
        }

        if(a[i][0] == 'O' && a[i][2] == 'O')
        {
            a[i][1] = 'X';
            x=1;
        }

        if(a[0][i] == 'O' && a[2][i] == 'O')
        {
            a[1][i] = 'X';
            x=1;
        }

        if(a[i][1] == 'O' && a[i][2] == 'O')
        {
            a[i][0] = 'X';
            x=1;
        }

        if(a[1][i] == 'O' && a[2][i] == 'O')
        {
            a[0][i] = 'X';
            x=1;
        }
    }


        if(a[0][0] == 'O' && a[1][1] == 'O')
        {
            a[2][2] = 'X';
            x=1;
        }

        if(a[0][0] == 'O' && a[2][2] == 'O')
        {
            a[1][1] = 'X';
            x=1;
        }

        if(a[1][1] == 'O' && a[2][2] == 'O')
        {
            a[0][0] = 'X';
            x=1;
        }

        if(a[0][2] == 'O' && a[1][1] == 'O')
        {
            a[2][0] = 'X';
            x=1;
        }

        if(a[0][2] == 'O'  && a[2][0] == 'O')
        {
            a[1][1] = 'X';
            x=1;
        }

        if(a[1][1] == 'O' && a[2][0] == 'O')
        {
            a[0][2] = 'X';
            x=1;
        }


        if(x==0)
        return 0;
        else
        if(x==1)
        return 1;
}

int towin()
{
    int i,x=0;

    if(a[1][1]=='O')
        a[0][0] = 'X';
    else
        a[1][1] = 'X';

    for(i=0;i<3;i++)
    {
        if(a[i][0] == 'X' && a[i][1] == 'X')
        {
            a[i][2] = 'X';
            x=1;
        }
        //else
        if(a[0][i] == 'X' && a[1][i] == 'X')
        {
            a[2][i] = 'X';
            x=1;
        }
        //else
        if(a[i][0] == 'X' && a[i][2] == 'X')
        {
            a[i][1] = 'X';
            x=1;
        }
        //else
        if(a[0][i] == 'X' && a[2][i] == 'X')
        {
            a[1][i] = 'X';
            x=1;
        }
        //else
        if(a[i][1] == 'X' && a[i][2] == 'X')
        {
            a[i][0] = 'X';
            x=1;
        }
        //else
        if(a[1][i] == 'X' && a[2][i] == 'X')
        {
            a[0][i] = 'X';
            x=1;
        }
    }

        if(a[0][0] == 'X' && a[1][1] == 'X')
        {
            a[2][2] = 'X';
            x=1;
        }
        //else
        if(a[0][0] == 'X' && a[2][2] == 'X')
        {
            a[1][1] = 'X';
            x=1;
        }
        //else
            if(a[1][1] == 'X' && a[2][2] == 'X')
        {
            a[0][0] = 'X';
            x=1;
        }
        //else
        if(a[0][2] == 'X' && a[1][1] == 'X')
        {
            a[2][0] = 'X';
            x=1;
        }
       // else
        if(a[0][2] == 'X' && a[2][0] == 'X')
        {
            a[1][1] = 'X';
            x=1;
        }
       // else
        if(a[1][1] == 'X' && a[2][0] == 'X')
        {
            a[0][2] = 'X';
            x=1;
        }

        if(x==0)
        return 0;
        else
        if(x==1)
        return 1;
}

void main()
{

    print();

    input();
    tonotloose();
    printf("tonotloose = %d\n",tonotloose());
    printf("towin = %d\n",towin());
    if(towin()==0)
    {
        tonotloose();
    }

    equal();
    printf("equal = %d\n",equal());

    if(equal() == 1)
    {
        return;
    }
    else
    if(equal() == 0)
    {
        main();
    }
}
