#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfmabc scanf("%lld%lld%lld%lld",&m,&a,&b,&c)
#define sfarr scanf("%d",&arr[i])
#define sfarr2 scanf("%d",&arr2[i])
#define sftll scanf("%lld",&t)
#define sfnll scanf("%lld",&n)
#define sfxyll scanf("%lld%lld",&x,&y)
#define sfarrll scanf("%lld",&arr[i])
#define sf2d scanf("%d",&arr[i][j])
#define pi acos(-1)
typedef long long ll;

int main()
{
    ll t, n, x, y, cs = 1, a, b, c, m;
    sftll;
    while(t--)
    {
        sfxyll;
        ll arr[x+2];
        sfmabc;
        arr[0] = m;
        for(ll i = 1; i < x; i++)
        {
            ll tmp = ((arr[i-1] % c)*(a % c)) % c;
            ll tmp2 = ((tmp % c) + (b % c)) % c;
            arr[i] = tmp2;
        }
        sort(arr, arr+x);
        cout << arr[y-1] << endl;
    }
}
