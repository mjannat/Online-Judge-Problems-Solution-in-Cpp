#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ppow(ll b, ll p)
{
    ll ret = 1;
    while(p)
    {
        if(p&1)ret*=b;
        p>>=(1ll);
        b*=b;
    }
    return ret;
}
int main()
{
 int b,p;
 cin >> b>> p;
 cout << ppow(b,p);
}

