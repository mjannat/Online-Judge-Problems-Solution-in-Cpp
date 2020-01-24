#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int i,a,b[n+1];
        map<int, int>freq;
        long long cnt=0;
        for(i=0; i<n; ++i)
        {
            scanf("%d %d",&a,&b[i]);
            freq[a]++;
        }
        for(i=0; i<n; ++i)
        {
            cnt+=freq[b[i]];
        }
        printf("%lld\n",cnt);
    }

    return 0;
}
