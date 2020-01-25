#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000001
#define Mod 1000003
ll fact[mx];
ll mul(ll a, ll b, ll c) {
    ll ret=0;
    while(b) {
        if(b&1) {
            ret += a;
            ret %= c;
        }
        a *= 2;
        a %= c;
        b /= 2;
    }
    return ret;
}
long long bigmod ( long long a, long long p, long long m )
{
    long long res = 1;
    long long x = a;

    while ( p )
    {
        if ( p & 1 ) //p is odd
        {
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }

    return res;
}
void cal_fact()
{
    fact[0] = 1;
    for(ll i = 1; i <= mx; i++)
    {
        fact[i] = ((fact[i-1] % Mod) * (i % Mod)) % Mod;
    }
}
int main()
{
    int test,cs = 1;
    cal_fact();
    scanf("%d",&test);
    while(test--){
    ll n, k;
    scanf("%lld %lld",&n,&k);
     printf("Case %d: ",cs++);
    ll tmp ;
    tmp = ((fact[n-k] % Mod) * (fact[k]% Mod)) % Mod;
    ll tmp2 = bigmod(tmp , Mod -2 , Mod);
    ll res = (fact[n] * tmp2) % Mod;
    printf("%lld\n",res);
    }
    return 0;
}
