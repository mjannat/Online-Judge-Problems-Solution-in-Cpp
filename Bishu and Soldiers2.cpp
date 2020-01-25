
#include<bits/stdc++.h>
using namespace std;
typedef long long ll  ;
ll  arr[200000];
int  main()
{
    ll  n;
    cin >> n;
    for(ll  i = 0; i < n; i++)cin >> arr[i];
    sort(arr,arr+n);
    ll  query;
    cin >> query;
    while(query--)
    {
        ll  cnt = 0,val,sum = 0;
        cin >> val;
        for(int i = 0; i < n;i++)
        {
            if(arr[i]<=val)
            {
                sum += arr[i];
                cnt++;
            }
        }
        cout << cnt << " " << sum <<"\n";
    }

}
