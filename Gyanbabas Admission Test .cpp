#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    cin >> test;
    while(test --)
    {
        string str;
        map<char , int>mp;
        map<char , int> :: iterator it;
        cin >> str;
        int len = 0;
        for(int i = 0;i < str.size();i++)
            mp[str[i]]++;
        for(it = mp.begin(); it != mp.end();it++)
        {
            if(it->second % 2 == 0) len += it->second;
            else len += it->second - 1;
        }
        if(len < str.size())cout << "Case " << cs++ <<": " << len + 1 ;
        else cout << "Case " << cs++ <<": " << len;
        cout << endl;
    }
    return 0;
}
