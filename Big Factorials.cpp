#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, fac = 1;
    cin >> n;
    for(int  i = 1; i <= n; i++)
    {
        fac *= i;
        fac %= 10000;
    }
    cout << fac << endl;
}
