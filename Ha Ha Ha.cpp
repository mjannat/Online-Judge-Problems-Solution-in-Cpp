#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test, cs = 1;
  scanf("%d",&test);
  while(test--)
  {
    int m,n;
    scanf("%d %d",&m,&n);
    printf("Case %d: %d\n",cs++,(m*m)+(n*n));
  }
}
