#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin >> str;
    ll countt = 0,n;
    cin >> n;
    for(ll i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a')countt++;
    }
    ll len = str.size();
    if(countt == 0)
    {
        cout << 0 << endl;
    }
    else if(n % len == 0)
    {
        cout << countt * (n / len)<< endl;
    }
    else
    {
        countt = countt * (n / len);
        for(ll i = 0; i < n % len; i++)
        {
            if(str[i] == 'a')countt++;
        }
        cout << countt << endl;
    }
}
