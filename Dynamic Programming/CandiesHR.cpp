#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s=0;
    cin >> n;
    int a[n],b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = 1;
    }

    for(int i=0;i<n-1;i++) {
        if(a[i] > a[i+1])
        {
            if(b[i] > b[i+1])
                continue;
            else
            if(b[i] < b[i+1])
            {
                while(b[i] <= b[i+1]) b[i]++;
            }
            else  b[i]++;
        }
        else
        if(a[i] < a[i+1])
        {
            if(b[i] < b[i+1])
                continue;
            else
            if(b[i] > b[i+1])
            {
                while(b[i] >= b[i+1]) b[i+1]++;
            }
            else  b[i+1]++;
        }
        else
        // if(a[i] == a[i+1])
        // {
        //     if(b[i] == b[i+1])
        //         b[i+1]++;
        //     else
        //         continue;
        // }
        if(a[i] == a[i+1])
        {

            if(b[i] != b[i+1])
            {
                if(i+2 < n && a[i+2] > a[i+1])
                {
                    continue;
                }
                else if(i+2 < n && a[i+2] < a[i+1])
                {
                    while(b[i] >= b[i+1]) b[i+1]++;
                }
                else if(i+2 < n && a[i+2] == a[i+1])
                {
                    continue;
                }
            }
            else
            if(b[i] == b[i+1])
            {
                b[i+1]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        s = s + b[i];
    }


    cout << s << "\n";
    return 0;
}

