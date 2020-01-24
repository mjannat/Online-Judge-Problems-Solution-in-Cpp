#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    scanf("%lld %lld",&n,&m);
    ll val,mis = 0,add = (n * (n + 1))/2;
    while(m--)
    {
       scanf("%lld",&val);
        mis += val;
    }
    printf("%lld\n",abs(add - mis));
    return 0;
}
