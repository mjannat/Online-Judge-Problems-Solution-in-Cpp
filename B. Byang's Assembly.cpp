#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map<char,int>mp;
    map<char,int> :: iterator it;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['P'] = 0;
    while(cin >> str)
    {
        if(str == "HLT")break;
        else if(str == "LOD")
        {
            int val;
            char ch;
            cin >> ch >> val;
            mp[ch] = val;
            mp['P']++;
        }
        else if(str == "ADD")
        {
            char ch1,ch2;
            cin >> ch1 >> ch2;
            mp[ch1] = mp[ch1] + mp[ch2];
            mp['P']++;
        }
        else if(str == "INC")
        {
            char ch;
            scanf("%c",&ch);
            mp[ch]++;
            mp['P']++;
        }
        else if(str == "MUL")
        {
            char ch1,ch2;
            cin >> ch1 >> ch2;
            mp[ch1] = mp[ch1] * mp[ch2];
            mp['P']++;
        }
        else if(str == "JMP")
        {
            int val;
            cin >> val;
            mp['P'] = val - 1;
        }
        else if(str == "CMP")
        {
            char ch1,ch2;
            cin >> ch1 >> ch2;
            if(mp[ch1] == mp[ch2])mp['C'] = 0;
            else if(mp[ch1] > mp[ch2])mp['C'] = 1;
            else  mp['C'] = -1;
            mp['P']++;
        }
        else if(str == "JCZ")
        {
            int val;
            cin >> val;
            if(mp['C'] == 0)
            {
                mp['P'] = val - 1;
            }
        }
        else if(str == "JCP")
        {
            int val;
            cin >> val;
            if(mp['C'] > 0)
            {
                mp['P'] = val - 1;
            }
        }
        else if(str == "JCN")
        {
            int val;
            cin >> val;
            if(mp['C'] < 0)
            {
                mp['P'] = val - 1;
            }
        }

    }
    for(it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << " ";
    }
}
