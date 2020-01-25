#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs = 1, test;
    double n, sub, val,sum = 0;
    scanf("%d",&test);
    while( test-- )
    {
     scanf("%lf",&n);
     sub = n;
     sum = 0;
     while(sub--)
     {
      scanf("%lf",&val);
      sum += val;
     }
     printf("Case %d: %.3lf\n",cs++, sum / n);
    }
}
