#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int test,cs = 1;
    cin >> test;
    while(test--)
    {
        while(t--)
    {
        sfxy;
        if(x > y)
        {
            ll r1 = x - 1;
            ll r2 = y + 1;
            ll r3 = r1 / r2;
            ll r4 = r1 - r3;
            ll r5 = r4 * 2;
            ll r6 = r5 + r3 + 1;
            cout << r6 << endl;
        }
        else
        {
            ll r1 = x - 1;
            ll r2 = r1 * 2 + 1;
            cout << r2 << endl;
        }
    }
}
}

