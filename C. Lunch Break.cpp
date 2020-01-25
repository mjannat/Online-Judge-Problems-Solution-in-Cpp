#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  scanf("%d",&test);
  while(test--)
  {
      int a,b,c,mn = INT_MAX;
      scanf("%d %d %d",&a,&b,&c);
      mn = min(min(a,b),c);
      if(mn == a)cout << "First\n";
      else if(mn == b)cout << "Second\n";
      else cout << "Third\n";
  }
}

