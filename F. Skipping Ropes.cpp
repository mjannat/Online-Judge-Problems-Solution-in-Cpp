#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    scanf("%d",&test);
    while(test--)
    {
        ll n,b;
        scanf("%lld %lld",&n,&b);
        if(n <= b)
        {
            printf("%lld\n",1 + ((n-1) * 2));
        }
        else
        {
            n--;
            ll m = (n / (b+1))   ;
            ll ans = ((n - m )* 2)  + m + 1;
            printf("%lld\n",ans);

        }
    }
}
