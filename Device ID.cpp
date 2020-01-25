#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {
      int n;
      scanf("%d",&n);
      set<int>store;
      set<int>all;
      for(int i = 1; i <= n;i++)
      {
          all.insert(i);
      }
      printf("Case %d:\n",cs++);
      while(n--)
      {
          int type, val;
          scanf("%d",&type);
          if(type == 3)
          {
              printf("%d\n",*all.begin());
          }
          else if(type == 2)
          {
            scanf("%d",&val);
             all.insert(val);
             store.erase(val);
          }
          else
          {
              scanf("%d",&val);
             if(all.count(val) == 1) all.erase(val);
             store.insert(val);
          }
      }
    }
}
