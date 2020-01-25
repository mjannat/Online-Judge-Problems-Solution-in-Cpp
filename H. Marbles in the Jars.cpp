#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int main()
{
    int test, cs = 1;
    scanf("%d",&test);
    while(test--)
    {
      int n;
      scanf("%d",&n);
      int arr[n+1];
      for(int i = 0; i < n;i++)
      {
        scanf("%d",&arr[i]);
      }
      sort(arr,arr+n);
      ll sum = 1;
      for(int i = 0;i < n; i++)
      {
      sum = (sum * (arr[i] - i)) % MOD;
      }
      printf("Case %d: %lld\n",cs++,sum % MOD);
    }
}
