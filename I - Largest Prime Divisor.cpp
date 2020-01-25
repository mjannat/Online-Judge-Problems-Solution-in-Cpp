#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll n;
  while(cin >> n)
  {
      if(n == 0)break;
      if(n < 0)n *= -1;
      ll root = sqrt(n);
      ll cnt = 0, mx = -1;
      for(ll i = 2; i <= root; i++)
      {
         if(n % i == 0)
         {
             cnt++;
             mx = max(mx,i);
         }
         while(n % i == 0)n /= i;

      }
      if(n > 1)
      {
          cnt++;
          mx = max(mx, n);
      }
      if(cnt > 1)cout << mx << endl;
      else cout << -1 << endl;
  }
}
