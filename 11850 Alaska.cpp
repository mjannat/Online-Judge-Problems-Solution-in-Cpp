#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // freopen("alaska.txt","w",stdout);
    ll n;
    while(cin >> n)
    {
        if(n == 0)break;
        ll arr[n+1], f = 1;
        for(ll i = 0; i < n; i++)cin >> arr[i];
        sort(arr,arr+n);
         arr[n] = 2 * (1422 - arr[n - 1]);
        for(ll i = 0; i < n; i++)
        {
            if(abs(arr[i+1] - arr[i]) > 200)
            {
                cout << "IMPOSSIBLE\n";
                f = 0;
                cout << arr[i + 1 ] - arr[i] << endl;
                break;
            }
        }
        if(f == 1)cout << "POSSIBLE\n";

    }
    return 0;
}
