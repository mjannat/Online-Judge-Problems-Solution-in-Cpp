#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll n,cnt = 0;
        cin >> n;
        if(n == 1)cout << 0 << endl;
        while(n  > 1)
        {
            if(n % 2 == 0)  n = n / 2;
            else if(n % 3 == 0)n = (2 * n) / 3;
            else if(n % 5 == 0)n = (4 * n) / 5;
            else {
                cout << -1 << endl;
                break;
            }
            cnt++;
            if(n < 1)
            {
                cout << -1 << endl;
                break;
            }
            if(n == 1)
            {
                cout << cnt << endl;
                break;
            }
        }

    }
}
