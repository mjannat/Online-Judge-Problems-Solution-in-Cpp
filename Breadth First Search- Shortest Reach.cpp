#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1009];
int main()
{
  int test,n,m,x,y,s;
  cin >> test;
  while(test--)
  {
      cin >> n >> m;
      for(int  i = 0; i < n+2;i++)
      {
          adj[i].clear();
      }
      for(int i = 0; i < m;i++)
      {
          cin >> x >> y;
          adj[x].push_back(y);
          adj[y].push_back(x);
      }
      cin >> s;
      bool vis[n+1];
      memset(vis,false,sizeof(vis));
      int dist[n+1];
      memset(dist,0,sizeof(dist));
      queue<int>q;
      q.push(s);
      vis[s]=true;
      dist[s] = 0;
      while(!q.empty())
      {
         int u = q.front();
         q.pop();
         for(int i = 0; i < adj[u].size(); i++)
         {
             int v = adj[u][i];
             if(!vis[v])
             {
                 vis[u] = true;
                 dist[v] = dist[u] + 6;
                 q.push(v);
             }
         }
      }
      for(int i = 1; i <= n; i++)
      {
          if(i != s)
          {
              if(dist[i] == 0)cout << -1 << " ";
          }
          else
          {
              cout << dist[i] << " ";
          }
      }
      cout << endl;
  }

}
