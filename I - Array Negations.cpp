#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        ll sum = 0;
        ll arr[n + 1], cnt = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < 0)cnt++;
            else sum += arr[i];
        }
        sort(arr,arr+n);
        for(ll i = 0 ; i < m; i++)
        {
            if(arr[i] < 0){sum += arr[i]*(-1);arr[i] = arr[i]*(-1);}
            else if(arr[i] > 0)
            {
                sort(arr,arr+n);
                if((m-i) % 2 == 0)break;
                else{
                    sum -= 2*arr[0];
                    break;

                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

