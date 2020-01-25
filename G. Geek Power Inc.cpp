#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, cs = 1, b, a;
    scanf("%lld",&t);
    while(t--)
    {
        cin >> n;
        map <ll, ll> mp;
        ll mx = -1, sum = 0;
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld %lld",&a,&b);
            mp[b] += a;
            sum += a;
        }
        map <ll, ll> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            ll temp = it->first * sum;
            mx = max(mx,temp);
            sum -= it->second;
        }
        printf("Case %lld: %lld\n",cs++,mx);
    }
}
