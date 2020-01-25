#include<bits/stdc++.h>
using namespace std;
#define MAX 1000006;
 bool prime[10006];
 vector< int >vct;
 void Sieve()
{
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<= 1006; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<= 1006; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<= 1006; p++)
       if (prime[p])
          vct.push_back(p);
}
int main()
{
  int n , m, sum = 0, cnt = 0;
  Sieve();
  scanf("%d %d",&m,&n);
  for(int i = 0; vct[i] <= m; i++)
  {
     sum = vct[i] + vct[i+1] + 1;
     if(sum <= m && prime[sum] == true)cnt++;
  }
  if(cnt >= n)cout << "YES\n";
  else cout << "NO\n";
}
