#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int test,n,m;
    string a,b,c;
    cin >> test;
    while(test--)
    {
        cin >> n >> m;
        cin >> a;
        cin >> b;
        cin >> c;
        int price[26];
        for(int i = 0;i < 26;i++)price[i] = 200000;
        for(int i = 0;i < a.size();i++)
        {
           price[a[i] - 'a'] = min(b[i] - '0',price[a[i] - 'a']);
        }
        int sum = 0,f = 0;
        for(int i = 0;i < m;i++)
        {
            if(price[c[i] - 'a'] ==  200000)
            {
                cout << -1 << endl;
                f = 1;
                break;
            }
            else{
               sum +=  price[c[i] - 'a'];
            }
        }
        if(f == 0)cout << sum << endl;
    }
}

