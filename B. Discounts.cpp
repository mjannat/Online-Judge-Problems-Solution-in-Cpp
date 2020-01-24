#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res[1000005];
int  main()
{
    ll n,m,sum = 0,val;
    cin >> n;
    ll arr[n+1];
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+= arr[i];
    }
    sort(arr,arr+n,greater<int>());
    cin >> m;
    while(m--)
    {
        cin >> val;
        cout << sum - arr[val-1] << endl;
    }
}

