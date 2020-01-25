#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    int n,cnt = 0,mx = 0,tmp = -1,f = 0;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)f = 1;
    }

    if(f == 1)
    {
        for(int i = 0; i < n; i++)
        {
            arr[n+i] = arr[i];
            if(arr[i] == 0)
            {
                tmp = i;
                break;
            }
        }
    }

    for(int i = 0; i <= n+tmp ; i++)
    {
        if(arr[i] == 1 ) cnt++;
        else
        {
            mx = max(mx,cnt);
            cnt = 0;
        }
    }
    cout << mx << endl;
}
