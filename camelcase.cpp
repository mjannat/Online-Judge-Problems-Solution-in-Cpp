#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0;i < str.size();i++)
    {
      if(str[i] >= 'A' && str[i] <= 'Z')cnt++;
    }
    if(cnt > 6)cout << "NO\n";
    else cout << "YES\n";
    }
}
