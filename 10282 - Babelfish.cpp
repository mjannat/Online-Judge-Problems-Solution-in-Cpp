#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,string>mp;
    string str,s2,s1;
    while(getline(cin,str))
    {
         if(str == "")break;
         istringstream sin(str);
         sin >> s1 >> s2;
        mp[s2] = s1;
    }
    while(cin >> s1)
    {
        if(mp[s1]!="")
            cout << mp[s1]  << endl;
        else
            cout << "eh" << endl;
    }


}
