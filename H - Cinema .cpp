#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    scanf("%lld",&test);
    while(test--)
    {
        int res = 0;
        string str;
        ll a,b,c = 0;
        cin >> a >> b;
        cin >> str;

        for(int  i = 0; i < str.size(); i++)
        {
            if(str[i] == '0')
            {
                c++;
                res = max(res, c);
            }
            else c = 0;
        }
        if(res >= b) cout << "yes" << endl;
        else cout << "no" << endl;
        }
}

