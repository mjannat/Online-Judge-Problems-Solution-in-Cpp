#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x, cnt = 0,beg = 1, endd = 0, mid = 0;
    scanf("%lld %lld",&n, &x);
    endd = n;
    while(beg < endd)
    {
        mid = (beg+endd)/2;
         if(x > mid)
        {
             beg = mid + 1;
        }
        else
        {
            endd = mid;

        }
            cnt++;
    }
    printf("%lld\n",cnt );
}
