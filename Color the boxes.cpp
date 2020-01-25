#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int main()
{
  ll m,n;
  scanf("%lld %lld",&n, &m);
  ll res = 1;
  for(ll i = 1; i <= m; i++)
  {
      res = i * res;
      res = res % MOD;
  }
  printf("%lld\n",res);
}
