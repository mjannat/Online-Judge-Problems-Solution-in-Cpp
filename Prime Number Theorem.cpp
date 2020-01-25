#include <bits/stdc++.h>
using namespace std;
#define MAX 100000001
typedef long long ll;
bool mark[MAX];
ll arr[MAX];
void sieve()
{
  for(int i = 3; i * i <= MAX;i+=2)
  {
      if(mark[i] == false)
      {
          for(int j = i * i; j <= MAX;j+=i+i)
          {
              mark[j] = true;
          }
      }
  }
  arr[2] = 1;
  for(int i = 3; i < MAX;i+=2)
  {
         if (mark[i] == false)
            arr[i+1] = arr[i] = arr[i-1]+1;
        else
            arr[i+1] = arr[i] = arr[i-1];

  }
}
int main()
{
    sieve();
    int n;
    double x, y, res;
    while(cin >> n)
    {
        if(n == 0)break;
        x = arr[n];
        y = double(n) / log(double(n));
        y = abs(x - y);
        res = (y / x) * 100;
        printf("%0.1lf\n",res);
    }
}
