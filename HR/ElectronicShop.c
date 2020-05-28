
#include <bits/stdc++.h>

using namespace std;

void sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
}

int main()
{
    int b,n,m,i,j,p,q;
    cin >> b >> n >> m;

    int k[n],u[m];

    for(i=0;i<n;i++)
        cin >> k[i];

    for(i=0;i<m;i++)
        cin >> u[i];

    sort(k,n);
    sort(u,m);

    if( (k[0] + u[0]) > b)
        printf("%d",-1);

    else
    {
        p = n-1;
        q = m-1;

        while(p>=0 || q>=0)
        {
            if(b >= k[p] + u[q])
            {
                break;
            }
            else
            {
                if(k[p-1] + u[q] < k[p] + u[q-1])
                {
                    if(q==0)
                        p--;
                    q--;
                }

                else
                if(k[p-1] + u[q] > k[p] + u[q-1])
                {
                    if(p==0)
                        q--;
                    p--;
                }

            }
        }
        printf("%d",k[p]+u[q]);
    }
    return 0;
}
