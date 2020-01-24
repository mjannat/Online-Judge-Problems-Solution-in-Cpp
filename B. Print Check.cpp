#include<bits/stdc++.h>
using namespace std;
int a,b,c,m,n,k;
int row[50002],col[50002],x[10000000];
int main()
{
    cin >> n >> m >> k;
    for(int i = 1;i <= k;i++)
    {
        cin >> a >> b >> x[i];
        if(a == 1)
            row[--b] = i;
        else
            col[--b] = i;

    }
     for(int i = 0;i < n;i++)
    {
      for(int j = 0;j < m;j++)
    {
        int ind = max(row[i],col[j]);
        cout << x[ind] << " ";
    }
    cout << endl;
    }
}
