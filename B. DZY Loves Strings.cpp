#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map<char,int>mp;
    cin >> str;
    int a,tmp,mx=0,val,sum = 0,ind=0;
    cin >> val;
    for(int i = 97; i <= 122; i++)
    {
        cin >> a;
        mp[i] = a;
        mx = max(mx,a);
    }
    ind = 1;
    for(int i = 0; i < str.size(); i++)
    {
        sum += (mp[str[i]] * ind);
        ind++;
    }
    for(int i = 1; i <= val; i++)
    {
        sum += mx * ind;
        ind++;
    }
    cout << sum <<endl;
}
