#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    scanf("%lld",&test);
    while(test--)
    {
        ll n,q, res = 0;
        scanf("%lld %lld",&n,&q);
        ll arr[n+1];
        ll freq[n+1];
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
            ll cnt=0;
            while(arr[i] != 1)
            {
             if(arr[i] % 2 == 1)arr[i]--;
             else arr[i]/=2;
             cnt++;
            }
            arr[i] = cnt;
            if(i == 0)freq[i] = arr[i];
            else freq[i] = arr[i]+freq[i-1];
        }

        while(q--)
        {
            ll val1,val2;
            scanf("%lld %lld",&val1,&val2);
            val1--,val2--;
            if(val1 == 0)
            {
                printf("%lld\n",freq[val2]);
            }
            else
            {
                printf("%lld\n",freq[val2] - freq[val1 - 1]);
            }
        }
    }
}
