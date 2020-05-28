                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            #include<stdio.h>

int n=5,m=4,i=0,j=0,x=0;

int a[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

//int a[3][3] = {{1,2,3},{5,6,7},{9,10,11},{13,14,15}};

void spiral()
{
    for(i=x;i<m;i++)
    {
        printf("%d ",a[x][i]);
    }

    for(i=x+1;i<n;i++)
    {
        printf("%d ",a[i][m-1]);
    }

    for(i=m-2;i>=x;i--)
    {
        printf("%d ",a[n-1][i]);
    }

    for(i=n-2;i>x;i--)
    {
        printf("%d ",a[i][x]);
    }
    n--;
    m--;
    x++;
    while(x<n && x<m)
    {
        spiral();
    }
}

void main()
{
    printf("Given Matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nElements in reverse order : \n");
    spiral();
}
