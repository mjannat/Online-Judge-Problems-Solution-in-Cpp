#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    string s1,s2;
    map<string,string>mp;
    while(m--)
    {
        cin >> s1 >> s2;
        if(s1.size() > s2.size())
        {
            mp[s1] = s2;
            mp[s2] = s2;
        }
        else
        {
            mp[s1] = s1;
            mp[s2] = s1;
        }
    }
    while(n--)
    {
        cin >> s1;
        cout << mp[s1] << " ";
    }
    cout << endl;
}
