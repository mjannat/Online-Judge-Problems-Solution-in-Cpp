#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string , int>mp;
    map<string , int> :: iterator it;
    string str,test;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
      cin >> str;
      mp[str]++;
    }
    for(it = mp.begin();it != mp.end();it++)
    {
        cout << it->first <<  " " << it->second << endl;
    }
}

