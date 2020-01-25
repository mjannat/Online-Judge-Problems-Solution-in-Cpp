#include<bits/stdc++.h>
using namespace std;
int track[1000006];
int main()
{
    string str;
    cin >> str;
    int mx = -1;
    map<char, int>mp;
    map<char, int>::iterator it;
    char c;
    for(int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > mx)
        {
            mx = it->second;
            c = it->first;
        }
    }
    cout << c << endl;
}
