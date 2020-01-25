#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m,n,cnt = 0;
    cin >> n >> m;
    if(m % n != 0 )
    return cout << -1 << endl,0;
    m/=n;
    while(m % 2 == 0)
    {
        cnt++;
        m /= 2;
    }
     while(m % 3 == 0)
    {
        cnt++;
        m /= 3;
    }
    if(m != 1)cout << -1 << endl;
    else cout << cnt << endl;
}
