#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test,cs = 1, tmp;
    scanf("%lld",&test);
    while(test--)
    {
        ll n;
        scanf("%lld",&n);
        if(n < 0)n *= (-1);
        for(ll i = 0; i <= n; i++)
        {
            if(i < n)printf("%lld ",i);
            else printf("%lld",i);
        }
        if(test > 0)printf("\n");
    }
    return 0;
}
