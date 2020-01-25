#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {

        ll m,n;
        scanf("%lld %lld",&m,&n);
        ll arr[m+1][n+1];
        memset(arr,0,sizeof(arr));
        ll mx = -1;
        for(int i = 1; i <= 1; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                scanf("%lld",&arr[i][j]);
            }
        }
        for(int i = 1; i <= m;i++)
        {
            arr[i][0] == arr[0][0];
        }
        for(int i = 2; i <= m; i++)
        {
            for(int j = 2; j <= n; j++)
            {
                arr[i][j] = (arr[i-1][j]) ^ (arr[i][j-1]);
            }
        }
         for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
               mx =  max(arr[i][j],mx);
            }
        }
       printf("Case %d: %lld\n",cs++,mx);
    }
}

