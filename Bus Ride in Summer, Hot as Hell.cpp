#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test, cs = 1;
  cin >> test;
  while(test--)
  {
      int n,a,b;
      cin >> n;
      int sum = 0,mn =INT_MAX;
      while(n--)
      {
          cin >> a >> b;
          sum += a;
          sum -= b;
         if(sum != 0) mn = min(mn,sum);
      }
      cout << "Case " << cs++<<": " << mn << endl;
  }
}
