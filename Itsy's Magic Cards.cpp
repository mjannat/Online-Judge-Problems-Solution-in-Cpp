#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int letter[200];
    map<int, int>mp;
    map<int, int> :: iterator it;
    char a,b;
    for(int i = 0;i < m;i++)
    {
      scanf("%c %c",&a,&b);
      letter[a]++;
      letter[b]++;
      mp[a] = b;
    }
    int flag = 0;
    for(int it = mp.begin();it != mp.end();it++)
    {
     if(letter[it->first] > 0)
     {

     }

    }

}
