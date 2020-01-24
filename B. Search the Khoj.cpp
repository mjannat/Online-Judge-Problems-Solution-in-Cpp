#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test, cs = 1;
   scanf("%d",&test);
   while(test--)
   {
       int n;
       scanf("%d",&n);
       string str[n+1], num;
       vector<string>vct;
       for(int i = 0; i < n; i++)
       {
          cin >> str[i];
       }
       cin >> num;
       for(int i = 0; i < n; i++)
       {
           int cnt = 0;
          for(int j = 0; j < str[i].size();j++)
          {
              if(str[i][j] != num[j])cnt++;
          }
          if(cnt <= 1)
          {
           vct.push_back(str[i]);
          }
       }
       cout << "Case " << cs++ <<":"<<endl;
       for(int i = 0; i < vct.size();i++)
       {
           cout << vct[i] << endl;
       }
   }
}
