#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, val;
    cin >> n;
    ll cnt = 0,neg = 0,zero = 0 ;
    for(ll i = 0; i < n; i++)
    {
        cin >> val;
        if(val == -1)neg++;
        else if(val == 0)zero++;
        else  if(val < -1 )
        {
            val *= (-1);
            cnt += (val - 1);
            neg++;
        }
        else cnt += (val - 1);

    }
    if(neg % 2 != 0  && zero == 0)cnt+=2;
    else if(neg % 2 != 0 || zero > 0)cnt += zero;

    cout << cnt << endl;
}
