#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,f = 0;
    string str;
    cin >> t;
    while(t--)
    {
      cin >> str;
      f = 0;
      for(int i = 0;i < str.size()-1;i++)
      {
          if(str[i] == 'z' && str[i+1] == 'a' )f = 0;
          else if(abs(str[i] - str[i+1]) == 1)f = 0;
          else
          {
              cout << "NO" << endl;
              f = 1;
              break;
          }
      }
      if(f == 0)cout << "YES\n";
    }
    return 0;
}

