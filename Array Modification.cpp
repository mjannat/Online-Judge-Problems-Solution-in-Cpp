#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    scanf("%lld",&test);
    while(test--)
    {
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll arr[n+1];
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }

            for(ll i = 0; i < k; i++)
            {
                ll a = arr[i % n];
                ll b = arr[n - (i % n) - 1];
                arr[i] = a ^ b;
            }
        for(ll i = 0; i < n; i++)
        {
            if(i < n - 1)printf("%lld ",arr[i]);
            else printf("%lld\n",arr[i]);
        }
    }
}
