#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll k, p, n;
        cin >> k >> p >> n;
        if(k  > p  )cout << (k * n) - (p * n) << endl;
        else cout << 0 << endl;
    }
}
