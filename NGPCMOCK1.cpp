#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll Max = 1000006;

ll phi[Max];
bool mark[Max];
void Euler_Sieve_phi()
{
    for(ll i = 1; i < Max; i++) phi[i] = i;
    mark[1] = true;

    for(ll i = 2; i < Max; i++)
    {
        if(!mark[i])
        {
            for(ll j = i; j < Max; j += i)
            {
                mark[j] = true;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
}

int main()
{
    Euler_Sieve_phi();
    ll test;
    scanf("%lld",&test);
    while(test--)
    {
        ll n;
        scanf("%lld",&n);
        ll temp = (n*phi[n])/2;
        ll ans = (n*(n-1)/2)-(temp);
        printf("%lld\n",ans);
    }
    return 0;
}
