#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        ll n, q;
        scanf("%lld",&n);
        ll arr[n + 1];
        map<int, int>mp;
        ll temp[n+1];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
            mp[i] = i;
            temp[i] = 1;
        }
        scanf("%lld",&q);
        while(q--)
        {
            ll a,b,c;
            scanf("%lld",&a);
            if(a == 1)
            {
                scanf("%lld %lld",&b,&c);
                b--,c--;
                if(arr[b] > arr[c])
                {
                    arr[b] += arr[c];
                    arr[c] = 0;
                    temp[b]++;
                    temp[c]--;
                    mp[c] = b;
                }
                else if(arr[b] < arr[c])
                {
                    arr[c] += arr[b];
                    arr[b] = 0;
                    temp[c]++;
                    temp[b]--;
                    mp[b] = c;
                }
            }
            else if(a == 2)
            {
                scanf("%lld",&b);
                printf("%lld\n",temp[b-1]);
            }
            else
            {
                scanf("%lld",&b);
                printf("%lld\n",mp[b - 1] + 1);
            }
        }
    }
}
