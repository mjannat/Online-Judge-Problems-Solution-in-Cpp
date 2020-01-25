#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        int cnt=0;
        scanf("%d",&n);
        int a[n+1], temp [n+1];
        for(int i = 0; i < n; ++i) scanf("%d", &a[i]);

        int mx[n+1], mn[n+1];
        mx[0] = a[0];
        for(int i = 1; i < n; ++i)
        {
            mx[i] = max(a[i] , mx[i - 1]);
        }
        mn[n-1] = a[n-1];
        for(int i = n-2;i >= 0;i--)
        {
          mn[i] = min(a[i] , mn[i+1]);
        }
        for(int i = 1; i < n-1; i++)
        {
            if(a[i] >= mx[i-1] && a[i] <= mn[i+1])cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
