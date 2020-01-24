#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MX 1000007
vector< ll >vct;
void Sieve()
{
    bool prime[MX+1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p*p <= MX; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p*2; i <= MX; i += p)
                prime[i] = false;
        }
    }
      for (ll p = 2; p <= MX; p++)
       if (prime[p]) vct.push_back(p);

}
ll countDivisors(ll n)
{
    ll cnt = 0, sum = 1;
    for(int  i = 0;i < vct.size() && (vct[i] * vct[i] <= n);i++)
    {
        cnt = 0;
        while(n % vct[i] == 0)
        {
           n /= vct[i];
           cnt++;
           if(n == 0 || n == 1)break;

        }
     sum *= (cnt + 1);
    }
    if(n != 1 )sum *= 2;
    return sum;
}
int main()
{
   ll test,cs = 1;
    scanf("%lld",&test);
    Sieve();
    while(test--)
    {
      ll val;
      scanf("%lld",&val);
      ll tmp = countDivisors(val);
      printf("Case %lld: %lld\n",cs++,tmp - 1);

    }
}
