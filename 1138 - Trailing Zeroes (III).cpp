#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define MX INT_MAX
ll n;
inline ll zero(ll n)
{
    ll ret = 0;
    while(n > 0)
    {
        n /= 5;
        ret += n;
    }
    return ret;
}
ll BS(ll beg, ll endd,ll n)
{
    ll mid, cnt, t;
    if(beg > endd)return -1;
    mid = (beg + endd) / 2;
    cnt = zero(mid);
    while(cnt == n)
    {
        while(zero(mid) == n)mid--;
        return ++mid;
    }
    if(cnt < n)return BS(mid+1, endd, n);
    else return BS(beg, mid-1, n);

}
int main()
{
    ll test, cs = 1;
    scanf("%lld",&test);
    while( test-- )
    {
        ll n;
        scanf("%lld",&n);
        ll res = BS(1, MX, n);
        if(res == -1) printf("Case %lld: impossible\n",cs++);
        else   printf("Case %lld: %lld\n",cs++, BS(1, MX, n));
    }

    return 0;
}
